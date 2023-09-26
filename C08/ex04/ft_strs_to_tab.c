/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:26:24 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/23 13:05:48 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i++] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = -1;
	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	while (++i < ac)
	{
		arr[i].str = (char *)malloc(sizeof(av[i]) + 1);
		arr[i].copy = (char *)malloc(sizeof(av[i]) + 1);
		arr[i].size = ft_strlen(av[i]);
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, av[i]);
	}
	arr[i++].str = NULL;
	return (arr);
}
