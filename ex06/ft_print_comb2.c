/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:02:33 by hojin             #+#    #+#             */
/*   Updated: 2021/10/16 12:57:39 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_twoarr(char arr00[], char arr01[])
{
	ft_putchar(arr00[0]);
	ft_putchar(arr00[1]);
	ft_putchar(' ');
	ft_putchar(arr01[0]);
	ft_putchar(arr01[1]);
	if (arr00[0] == '9' && arr00[1] == '8'
		&& arr01[0] == '9' && arr01[1] == '9')
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

bool	is_num_ninetynine(char arr[])
{
	if (arr[0] == ('9' + 1))
		return (true);
	return (false);
}

char	*plus_one(char arr[])
{
	if (arr[1] != '9')
	{
		arr[1] += 1;
	}
	else
	{
		arr[1] = '0';
		arr[0] += 1;
	}
	return (arr);
}

void	ft_print_comb2(void)
{
	char	arr00[2];
	char	arr01[2];

	arr00[0] = '0';
	arr00[1] = '0';
	arr01[0] = '0';
	arr01[1] = '0';
	while (!is_num_ninetynine(arr00))
	{
		plus_one(arr01);
		while (!is_num_ninetynine(arr01))
		{
			ft_put_twoarr(arr00, arr01);
			plus_one(arr01);
		}
		plus_one(arr00);
		arr01[0] = arr00[0];
		arr01[1] = arr00[1];
	}
}
