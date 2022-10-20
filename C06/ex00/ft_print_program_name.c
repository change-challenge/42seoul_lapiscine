/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:29:30 by hchang            #+#    #+#             */
/*   Updated: 2021/10/23 20:34:34 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int	idx;

	idx = 0;
	if (argv == 1)
	{
		while (argc[0][idx])
		{
			write(1, &argc[0][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
