/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:00:58 by hojin             #+#    #+#             */
/*   Updated: 2021/10/26 11:08:23 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	idx;
	int	range;
	int	*arr;

	idx = 0;
	range = (max - min);
	if (min >= max)
		return (0);
	arr = malloc(range * sizeof(int));
	while (idx <= range)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (arr);
}
