/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkenzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:29:06 by mkenzi            #+#    #+#             */
/*   Updated: 2025/07/17 11:27:34 by mkenzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	char	j;
	char	i;

	j = x / 10 + '0';
	i = x % 10 + '0' ;
	write(1, &j, 1);
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
