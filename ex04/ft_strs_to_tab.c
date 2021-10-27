/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:42:49 by hojin             #+#    #+#             */
/*   Updated: 2021/10/27 15:52:42 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*copied;

	count = str_len(src) + 1;
	copied = (char *)malloc(sizeof(char) * count);
	if (copied == NULL)
		return (NULL);
	ft_strcpy(copied, src);
	return (copied);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			count;
	t_stock_str	*arr;

	count = 0;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (count < ac)
	{
		arr[count].size = str_len(av[count]);
		arr[count].str = av[count];
		arr[count].copy = ft_strdup(av[count]);
		count++;
	}
	arr[count] = (t_stock_str){0, 0, 0};
	return (arr);
}
