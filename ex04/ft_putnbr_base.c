/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:57:07 by hchang            #+#    #+#             */
/*   Updated: 2021/10/23 10:57:08 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (base[idx] == '-' || base[idx] == '+')
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
	return (1);
}

void	print_base_num(int nbr, int base_len, char *base)
{
	int	part_of_num;
	int	num;
	int	tmp;

	num = 1;
	tmp = nbr;
	if (nbr < 0)
		write(1, "-", 1);
	nbr = nbr / base_len;
	while (nbr != 0)
	{
		num *= base_len;
		nbr = nbr / base_len;
	}
	while (num != 0)
	{
		part_of_num = tmp / num;
		if (part_of_num < 0)
			part_of_num = part_of_num * (-1);
		write(1, &base[part_of_num], 1);
		tmp = tmp % num;
		num = num / base_len;
	}
}

void	ft_putnbr(int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (is_base_ok(base))
		print_base_num(nbr, len, base);
}
