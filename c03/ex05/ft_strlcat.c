/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:36:45 by mkenzi            #+#    #+#             */
/*   Updated: 2025/07/26 11:01:22 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;
	unsigned int	j;
	unsigned int	f;

	f = 0;
	x = 0;
	i = len(dest);
	j = len(src);
	if (size <= i)
	{
		return (size + j);
	}
	while (src[x] != '\0' && i + f < size - 1)
	{
		dest[i + f] = src[x];
		x++;
		f++;
	}
	dest[i + f] = '\0';
	return (j + i);
}
