/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:12:20 by hchang            #+#    #+#             */
/*   Updated: 2021/10/20 12:12:24 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char *str)
{
	int	idx;

	idx = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
	{
		idx++;
		str++;
	}
	return (idx);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	min_chk;

	i = 0;
	num = 0;
	min_chk = 1;
	str += is_space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min_chk *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (min_chk * num);
}
