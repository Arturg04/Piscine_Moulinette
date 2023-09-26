/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/22 21:00:23 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	split(char c, char *str)
{
	while (*str)
	{
		if (c == *str++)
			return (1);
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	arr = malloc(sizeof(str));
	while (str[i])
	{
		count = 0;
		while (str [i] && !split(str[i], charset))
		{
			i++;
			count++;
		}
		if (count > 1)
		{
			arr[j] = (char *)malloc((count + 1));
			ft_strncpy(arr[j++], &str[i - count], count);
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
