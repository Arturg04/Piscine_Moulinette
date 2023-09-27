/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:25 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/27 13:37:00 by Arturg04         ###   ########.fr       */
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
    unsigned int i = 0;
    while (src[i] && i < n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0; // Set the null terminator at the correct position
    return dest;
}

char **ft_split(char *str, char *charset) {
    char **arr;
    int i = 0;
    int j = 0;
    int word_count = 0; // Count of words in the input string

    // Calculate word_count
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

    // Allocate memory for arr
    arr = (char **)malloc((word_count + 1) * sizeof(char *));
    if (arr == NULL) {
        return NULL; // Memory allocation failed
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
				return NULL; // Memory allocation failed
			}
			ft_strncpy(arr[j], &str[i], count);
			j++;
			i += count;
		}
	}
	arr[j] = NULL; // Set the last element to NULL to terminate the array
	return arr;
}
