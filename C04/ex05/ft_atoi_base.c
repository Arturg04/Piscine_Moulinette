/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:34:42 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 18:52:42 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	power(int nbr, int power)
{
	int	res;

	res = 1;
	while (--power >= 0)
		res = res * nbr;
	return (res);
}

int	atoibase2(char *str, char *base, int strlen, int baselen)
{
	int	i;
	int	j;
	int	res;

	i = -1;
	res = 0;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
				break ;
		}
		if (base[j] == 0)
			return (res);
		res = res + j * power(baselen, --strlen);
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	baselen = ft_strlen(base);
	if (baselen < 2 || !check(base))
		return (0);
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			neg = -neg;
	}
	res = atoibase2(str, base, ft_strlen(str), baselen) * neg;
	return (res);
}
