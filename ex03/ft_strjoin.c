/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:18:46 by hojin             #+#    #+#             */
/*   Updated: 2021/10/26 17:12:49 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*str_cat(char *dest, char *src)
{
	int	len;
	int	idx;

	len = 0;
	idx = 0;
	while (dest[len])
		len++;
	while (src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
	}
	dest[len] = 0;
	return (dest);
}

int	str_seps_all_len(char **strs, char *seps, int size)
{
	int	idx;
	int	all_len;

	idx = 0;
	all_len = 0;
	while (idx < size)
	{
		all_len += str_len(strs[idx]);
		if (idx < size - 1)
			all_len += str_len(seps);
		idx++;
	}
	return (all_len);
}

char	*make_strjoin(char **strs, char *sep, int all_lens, int size)
{
	char	*result;
	int		idx;

	idx = 0;
	result = malloc((sizeof(char) * (all_lens + 1)));
	if (result == NULL)
		return (0);
	while (idx < size)
	{
		str_cat(result, strs[idx]);
		if (idx < size - 1)
			str_cat(result, sep);
		idx++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *seps)
{
	char	*result;
	int		all_lens;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		return (result);
	}
	all_lens = str_seps_all_len(strs, seps, size);
	result = make_strjoin(strs, seps, all_lens, size);
	return (result);
}
