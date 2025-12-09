/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:54:25 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/04 20:31:32 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	s;
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	s = max - min;
	arr = malloc(sizeof(int) * s);
	if (arr == NULL)
		return (0);
	while (i < s)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int main()
{
	int *tab = ft_range(13, 11);
	for(int i = 0; i < 10; i++)
		printf("%d", tab[i]);

	
}*/
