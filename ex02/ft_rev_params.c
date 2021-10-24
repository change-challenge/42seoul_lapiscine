/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:20:02 by hojin             #+#    #+#             */
/*   Updated: 2021/10/24 19:21:39 by hojin            ###   ########.fr       */
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
		print_str(argv[argc - idx]);
		idx++;
	}
	return (0);
}
