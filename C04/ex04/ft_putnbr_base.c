/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:15:00 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 23:34:09 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i;
		while (base[++j])
		{
			if (base[j] == base[i])
				return (0);
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	neg;
	int	baselen;

	neg = 1;
	baselen = ft_strlen(base);
	if (baselen < 2 || !check(base))
		return ;
	if (nbr < 0)
	{
		neg = -neg;
		ft_putchar('-');
	}
	if (nbr < baselen && nbr > -baselen)
	{
		ft_putchar(base[nbr % baselen * neg]);
		return ;
	}
	ft_putnbr_base(nbr / baselen * neg, base);
	ft_putchar(base[nbr % baselen * neg]);
}
