/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:14:59 by mkenzi            #+#    #+#             */
/*   Updated: 2025/07/30 16:29:29 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	int		f;
	char	*a;

	f = 0;
	i = 1;
	while (i < ac)
	{
		f = i + 1;
		while (av[f])
		{
			if (ft_strcmp(av[i], av[f]) > 0)
			{
				a = av[f];
				av[f] = av[i];
				av[i] = a;
			}
			f++;
		}
		ft_putstr(av[i]);
		i++;
	}
}
