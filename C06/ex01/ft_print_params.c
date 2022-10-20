/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:09:35 by hojin             #+#    #+#             */
/*   Updated: 2021/10/24 19:19:17 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		write(1, &str[idx], 1);
		idx++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	idx;

	idx = 1;
	while (idx < argc)
	{
		print_str(argv[idx]);
		idx++;
	}
	return (0);
}
