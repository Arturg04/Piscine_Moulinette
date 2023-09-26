/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:42:21 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 22:13:01 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = -1;
	if (max - min < 1)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min < max)
		arr[++i] = min++;
	return (arr);
}
