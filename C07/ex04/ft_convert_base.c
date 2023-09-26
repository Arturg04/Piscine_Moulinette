/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:42:16 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/22 19:30:42 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"

int	ft_atoi_base(char *str, char *base);
int	check(char *base);
int	ft_strlen(char *str);

void	getbase(int nbr, int index, char *dest, char *base)
{
	int	size;

	size = ft_strlen(base);
	if (nbr < size)
	{
		dest[index] = base[nbr % size];
		dest[index + 1] = 0;
		return ;
	}
	getbase(nbr / size, index + 1, dest, base);
	dest[index] = base[nbr % size];
}

int	checksize(int nbr, int baselen)
{
	int	size;

	size = 0;
	if (nbr < 0)
		size++;
	while (nbr != 0)
	{
		size++;
		nbr = nbr / baselen;
	}
	return (++size);
}

char	*ft_rev_int_tab(char *tab)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(tab);
	i = 0;
	if (tab[0] == '-')
	{
		i++;
		size++;
	}
	while (size / 2 > i)
	{
		j = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = j;
		i++;
	}
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*arr;
	int		nb;
	int		neg;
	int		i;
	int		size;

	neg = 1;
	i = 0;
	size = ft_strlen(base_to);
	if (!check(base_from) || !check(base_from))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	arr = (char *)malloc(checksize(nb, size) + 1);
	if (nb < 0)
	{
		neg = -neg;
		arr[i++] = '-';
	}
	getbase(nb / size * neg, i + 1, arr, base_to);
	arr[i] = base_to[nb % size * neg];
	return (ft_rev_int_tab(arr));
}
