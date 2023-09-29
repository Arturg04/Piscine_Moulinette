/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:59:38 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 23:12:03 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg;
	int	res;

	neg = 1;
	res = 0;
	while (*str == ' ')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			break ;
		if (*str != '+' && *str != '-')
			return (0);
		if (*str == '-')
			neg = -neg;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*(str++) - 48);
	return (res * neg);
}
