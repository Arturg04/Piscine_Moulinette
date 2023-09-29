/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:33:41 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 23:13:24 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int n)
{
	ft_putchar(n / 10 + 48);
	ft_putchar(n % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putnb(i);
			ft_putchar(' ');
			ft_putnb(j++);
			if (i < 98)
				write(1, ", ", 2);
		}
	}
}
