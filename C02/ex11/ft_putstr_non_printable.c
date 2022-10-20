/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:41:37 by hchang            #+#    #+#             */
/*   Updated: 2021/10/23 11:03:41 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				idx;

	idx = 0;
	while (str[idx])
	{
		c = str[idx];
		if (ft_str_is_printable(c))
			write(1, &str[idx], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		idx++;
	}
}
