/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:14:49 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/04 20:30:02 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	src2 = malloc(sizeof(char) * (i + 1));
	if (src2 == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (src[j])
	{
		src2[j] = src[j];
		j++;
	}
	src2[j] = '\0';
	return (src2);
}
/*
#include<stdio.h>
int main()
{
	printf("%s",ft_strdup("jjskwk"));
}*/
