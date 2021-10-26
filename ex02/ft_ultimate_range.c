/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:11:45 by hojin             #+#    #+#             */
/*   Updated: 2021/10/26 13:18:20 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;
	int	size;
	int	*arr;

	idx = 0;
	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (-1);
	while (idx <= size)
	{
		arr[idx] = min + idx;
		idx++;
	}
	*range = arr;
	return (idx);
}
