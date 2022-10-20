/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:57:07 by hchang            #+#    #+#             */
/*   Updated: 2021/10/25 13:41:57 by hojin            ###   ########.fr       */
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
	return (idx);
}

void	prt_base_recursivly(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr > base_len - 1)
		prt_base_recursivly(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = is_base_ok(base);
	if (is_base_ok(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			write(1, "-", 1);
		}
		prt_base_recursivly(nbr, base, base_len);
	}
}
