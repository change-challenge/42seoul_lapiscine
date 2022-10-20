/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojin <hojin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:23:13 by hojin             #+#    #+#             */
/*   Updated: 2021/10/24 20:05:44 by hojin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx])
		idx++;
	return (s1[idx] - s2[idx]);
}

void	print_argv_all(int argc, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		idx;
	char	*tmp;

	idx = 1;
	if (argc > 1)
	{
		while (idx < argc - 1)
		{
			if (ft_strcmp(argv[idx], argv[idx + 1]) > 0)
			{
				tmp = argv[idx];
				argv[idx] = argv[idx + 1];
				argv[idx + 1] = tmp;
				idx = 0;
			}
			idx++;
		}
		print_argv_all(argc, argv);
	}	
	return (0);
}
