/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:14:44 by mkenzi            #+#    #+#             */
/*   Updated: 2025/07/29 12:50:34 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	condition_base(char *base)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = ft_len(base);
	if (i <= 1)
		return (0);
	while (base[x])
	{
		j = x + 1;
		while (base[j])
		{
			if (base[x] == base[j])
				return (0);
			else if (base[x] == '+' || base[x] == '-')
				return (0);
			j++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	c;

	c = nbr;
	if (condition_base(base))
	{
		if (c < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (c >= ft_len(base))
		{
			ft_putnbr_base(c / ft_len(base), base);
		}
		c = base[c % ft_len(base)];
		write (1, &c, 1);
	}
}
