/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:07:36 by hojin             #+#    #+#             */
/*   Updated: 2021/10/24 18:04:39 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	g_start;
int	g_end;

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		nb %= 10;
		nb += '0';
		write(1, &nb, 1);
	}
}

void	make_start_end_point(int size)
{
	int	start_idx;
	int	end_idx;
	int	degree;

	start_idx = size - 1;
	end_idx = size;
	degree = 1;
	while (start_idx)
	{
		g_start *= 10;
		g_start += degree;
		start_idx--;
		degree++;
	}
	degree = 10 - size;
	while (end_idx)
	{
		g_end *= 10;
		g_end += degree;
		end_idx--;
		degree++;
	}
}

int	is_comb_okay(int number)
{
	int	num1;
	int	num2;

	num2 = number % 10;
	while (number)
	{
		number /= 10;
		num1 = number % 10;
		if (num1 >= num2)
			return (0);
		num2 = num1;
	}
	return (1);
}

void	print_comb(int size, int ten_power)
{
	while (g_start <= g_end)
	{
		if (is_comb_okay(g_start))
		{
			if (g_start < ten_power)
			{
				if (g_start != 0)
					write(1, "0", 1);
				ft_putnbr(g_start);
			}
			else
				ft_putnbr(g_start);
			if (g_start == g_end)
				break ;
			write(1, ", ", 2);
		}
		g_start++;
	}
}

void	ft_print_combn(int n)
{
	int	ten_power;

	ten_power = 1;
	if (n < 1 && n > 9)
		return ;
	make_start_end_point(n);
	while (n != 1)
	{
		ten_power *= 10;
		n--;
	}
	print_comb(n, ten_power);
}
