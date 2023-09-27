/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:49:33 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 23:13:12 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_combn(int n)
{
	int		i;
	char	res[11];

	if (n < 1 || n > 9)
		return ;
	i = -1;
	while (++i < n)
		res[i] = i + 48;
	res[i--] = 0;
	while (res[0] <= 10 - n + 48)
	{
		while (res[i] <= 10 - n + i + 48)
		{
			ft_putstr(&res[0]);
			if (res[0] != 10 - n + 48)
				ft_putstr(", ");
			res[i]++;
		}
		while (res[i] == 11 - n + i + 48 && i > 0)
			i--;
		res[i] += 1;
		while (++i < n)
			res[i] = res[i - 1] + 1;
		i--;
	}
}
