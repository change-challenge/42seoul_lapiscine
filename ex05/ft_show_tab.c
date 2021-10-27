/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:42:41 by hojin             #+#    #+#             */
/*   Updated: 2021/10/27 15:52:31 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

void	ft_putnbr(int num)
{
	char c;

	c = num + '0';
	if (num < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	while (par[idx].str != 0)
	{
		print_str(par[idx].str);
		ft_putchar('\n');
		ft_putnbr(par[idx].size);
		ft_putchar('\n');
		print_str(par[idx].copy);
		ft_putchar('\n');
		idx++;
	}
}
