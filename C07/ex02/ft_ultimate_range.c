/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:55:43 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 22:19:03 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
