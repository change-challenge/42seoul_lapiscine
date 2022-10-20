/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:18:46 by hojin             #+#    #+#             */
/*   Updated: 2021/10/27 19:27:14 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*arr;
	char		*tmp;
	long long	total_len;
	int			idx;

	if (!size)
	{
		arr = ((char *)malloc(sizeof(char)));
		arr[0] = 0;
		return (arr);
	}
	total_len = 0;
	idx = 0;
	while (idx < size)
		total_len += ft_strlen(strs[idx++]);
	arr = (char *)malloc(total_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(arr, strs[0]);
	idx = 1;
	while (idx < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[idx++]);
	}
	*tmp = 0;
	return (arr);
}
