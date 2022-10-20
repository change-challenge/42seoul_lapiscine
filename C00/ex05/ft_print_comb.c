/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:52:02 by hojin             #+#    #+#             */
/*   Updated: 2021/10/16 11:12:34 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_3_num(char hunds, char tens, char units)
{
	ft_putchar(hunds);
	ft_putchar(tens);
	ft_putchar(units);
	if (hunds == '7' && tens == '8' && units == '9')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	hunds;
	char	tens;
	char	units;

	hunds = '0';
	while (hunds <= '7')
	{
		tens = hunds + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				ft_put_3_num(hunds, tens, units);
				units++;
			}
			tens++;
		}
		hunds++;
	}
}
