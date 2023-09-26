/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:19:55 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 22:39:47 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(sizeof(strs) + (sizeof(sep) * (size - 1)) + 1);
	if (arr == NULL)
		return (NULL);
	arr[0] = 0;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(arr, sep);
		ft_strcat(arr, strs[i++]);
	}
	return (arr);
}
