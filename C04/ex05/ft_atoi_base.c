/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:51:28 by hojin             #+#    #+#             */
/*   Updated: 2021/10/25 19:41:52 by hojin            ###   ########.fr       */
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

int	num_changed_by_base(char match, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == match)
			return (idx);
		idx++;
	}
	return (-1);
}

int	is_base_double(char *base, char match, int start_point)
{
	start_point++;
	while (base[start_point])
	{
		if (match == base[start_point])
			return (1);
		start_point++;
	}
	return (0);
}

int	is_base_ok(char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '-' || base[idx] == '+' || base[idx] == '\t'
			|| base[idx] == '\n' || base[idx] == '\v' || base[idx] == '\f'
			|| base[idx] == '\r' || base[idx] == ' ')
			return (0);
		idx++;
	}
	if (idx == 0 || idx == 1)
		return (0);
	idx = 0;
	while (base[idx])
	{
		if (is_base_double(base, base[idx], idx))
			return (0);
		idx++;
	}
	return (idx);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	min_chk;
	int	base_len;

	num = 0;
	min_chk = 1;
	base_len = 0;
	if (is_base_ok(base) == 0)
		return (0);
	while (base[base_len])
		base_len++;
	str += is_space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min_chk *= -1;
		str++;
	}
	while (num_changed_by_base(*str, base) != (-1) && *str)
	{
		num *= base_len;
		num += num_changed_by_base(*str, base);
		str++;
	}
	return (num * min_chk);
}
