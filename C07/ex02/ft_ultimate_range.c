/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:04:21 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/04 20:33:29 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	s = max - min;
	*range = malloc(sizeof(int) * s);
	if (*range == 0)
		return (-1);
	while (i < s)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (s);
}
/*
int main()
{
	int i ;
	i = 0;
	int *arr;
	int size =ft_ultimate_range(&arr, 4, 6);

	for (int i = 0 ; i < size; i++)
		printf("%d", arr[i]);
}*/
