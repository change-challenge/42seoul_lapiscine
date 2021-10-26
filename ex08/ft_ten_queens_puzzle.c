/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:37:41 by hchang            #+#    #+#             */
/*   Updated: 2021/10/26 12:17:32 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ten_queen_place(int *chessboard)
{
	int		idx;
	char	queen_place;

	idx = 0;
	while (idx < 10)
	{
		queen_place = chessboard[idx] + '0';
		write(1, &queen_place, 1);
		idx++;
	}
	write(1, "\n", 1);
}

int	check_queen(int x, int y, int *chessboard)
{
	int	tmp_place;

	tmp_place = 0;
	while (tmp_place < x)
	{
		if (chessboard[tmp_place] == y
			|| chessboard[tmp_place] - y == x - tmp_place
			|| chessboard[tmp_place] - y == tmp_place - x)
			return (0);
		tmp_place++;
	}
	return (1);
}

void	place_one_queen(int x, int *chessboard, int *ptr_res)
{
	int	y;

	if (x == 10)
	{
		print_ten_queen_place(chessboard);
		(*ptr_res)++;
	}
	else
	{
		y = 0;
		while (y < 10)
		{
			if (check_queen(x, y, chessboard))
			{
				chessboard[x] = y;
				place_one_queen(x + 1, chessboard, ptr_res);
			}
			y++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	result;
	int	*ptr_res;
	int	chessboard[10];

	x = 0;
	result = 0;
	ptr_res = &result;
	place_one_queen(x, chessboard, ptr_res);
	return (result);
}
