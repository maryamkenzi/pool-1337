/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:52:51 by mkenzi            #+#    #+#             */
/*   Updated: 2025/07/22 12:01:33 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = str[0] -32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (!((str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= '0' && str[i -1] <= '9')
				|| (str[i -1] >= 'A' && str[i -1] <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
