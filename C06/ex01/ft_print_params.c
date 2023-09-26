/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:14:15 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 21:17:19 by Arturg04         ###   ########.fr       */
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
	int	i;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}
