/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:56:46 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/23 14:08:31 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	negative;

	negative = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		negative *= -1;
	}
	if (nb > 10 || nb < -10)
		ft_putnbr(nb / 10 * negative);
	ft_putchar(nb % 10 * negative + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
