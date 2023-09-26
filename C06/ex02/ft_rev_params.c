/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:17:35 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 21:18:11 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (--ac >= 1)
		ft_putstr(av[ac]);
}
