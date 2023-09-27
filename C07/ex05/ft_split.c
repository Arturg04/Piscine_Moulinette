/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/27 13:40:20 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int split(char c, char *str) {
	while (*str) {
		if (c == *str++)
			return (1);
	}
	return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n) {
	unsigned int i;

	i = 0;
	while (src[i] && i < n) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return dest;
}

char **ft_split(char *str, char *charset) {
	char	**arr;
	int		i;
	int		j;
	int		word_count;

	i = 0;
	j = 0;
	word_count = 0;
	while (str[i]) {
		while (str[i] && split(str[i], charset)) {
			i++;
		}
		if (str[i] && !split(str[i], charset)) {
			word_count++;
			while (str[i] && !split(str[i], charset)) {
				i++;
			}
		}
	}
	arr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL) {
		return NULL;
	}
	i = 0;
	while (str[i]) {
		int count = 0;
		while (str[i] && split(str[i], charset)) {
			i++;
		}
		if (str[i] && !split(str[i], charset)) {
			while (str[i + count] && !split(str[i + count], charset)) {
			count++;
			}
			arr[j] = (char *)malloc(count + 1);
			if (arr[j] == NULL) {
				return NULL;
			}
			ft_strncpy(arr[j], &str[i], count);
			j++;
			i += count;
		}
	}
	arr[j] = NULL;
	return arr;
}
