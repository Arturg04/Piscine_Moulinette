/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:18:00 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/20 22:55:22 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countarr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n_src;
	unsigned int	n_dst;
	unsigned int	res;
	unsigned int	i;

	n_dst = countarr(dest);
	n_src = countarr(src);
	res = 0;
	i = 0;
	if (size > n_dst)
	{
		res = n_src + n_dst;
	}
	else
	{
		res = n_src + size;
	}
	while (src[i] != 0 && (n_dst + 1) < size)
	{
		dest[n_dst] = src[i];
		n_dst++;
		i++;
	}
	dest[n_dst] = '\0';
	return (res);
}
