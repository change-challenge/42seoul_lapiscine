/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:00:41 by hojin             #+#    #+#             */
/*   Updated: 2021/10/26 11:11:30 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest_duparr;
	int		idx;

	idx = 0;
	while (src[idx])
		idx++;
	dest_duparr = malloc(sizeof(char) * idx + 1);
	idx = 0;
	while (src[idx])
	{
		dest_duparr[idx] = src[idx];
		idx++;
	}
	dest_duparr[idx] = '\0';
	return (dest_duparr);
}
