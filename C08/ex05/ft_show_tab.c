/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:18:46 by mkenzi            #+#    #+#             */
/*   Updated: 2025/08/05 22:25:45 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int     len(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}
char    *ft_strdup(char *src)
{
        char    *src2;
        int             i;
        int             j;

        i = 0;
        j = 0;
        while (src[j])
        {
                j++;
        }
        src2 = malloc(sizeof(char) * (i + 1));
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

struct  s_stock_str     *ft_strs_to_tab(int ac, char **av)
{
        t_stock_str     *tab;
        int                     i;
        int                     j;

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
#include<stdio.h>
int main(int ac, char **av)
{
        t_stock_str *res = ft_strs_to_tab(ac , av);
                ft_show_tab(res);
        return 0;
}*/
