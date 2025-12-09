/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:36:27 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/05 20:31:17 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*src2;
	int		j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	src2 = malloc(sizeof(char) * (j + 1));
	if (src2 == NULL)
		return (NULL);
	j = 0;
	while (src[j])
	{
		src2[j] = src[j];
		j++;
	}
	src2[j] = '\0';
	return (src2);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == 0)
	{
		return (NULL);
	}
	while (i < ac)
	{
		tab[i].size = len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
#include<stdio.h>
int main(int ac, char **av)
{
	t_stock_str *res = ft_strs_to_tab(ac , av);
	int i =0;
	while (i < ac)
	{
		printf("%d\n", res[i].size);
		printf("%s\n", res[i].str);
		printf("%s\n", res[i].copy);
		i++;
	}
	return 0;
}*/
