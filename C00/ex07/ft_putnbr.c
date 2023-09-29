/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:41:07 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/29 16:57:15 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	if (nb > 9 || nb < -9)
		ft_putnbr(nb / 10 * negative);
	ft_putchar(nb % 10 * negative + 48);
}
