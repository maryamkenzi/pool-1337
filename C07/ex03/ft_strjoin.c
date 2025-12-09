/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:38:22 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/05 10:47:31 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *str[], int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	lensep(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	i;

	x = 0;
	i = lensep(dest);
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*s;
	int		len_totale;

	i = 0;
	if (size <= 0)
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
		return (s);
	}
	len_totale = len(strs, size) + (lensep(sep) * (size -1));
	s = malloc(sizeof(char) * (len_totale + 1));
	if (s == 0)
		return (NULL);
	s[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i++ < size - 1)
			ft_strcat(s, sep);
	}
	s[len_totale] = '\0';
	return (s);
}

#include <stdio.h>
int main()
{
	char *strs[] ={"maryam", "wor", "slm", "cv"};
	char *sep = ",+++,";
	int size = 4;
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}

