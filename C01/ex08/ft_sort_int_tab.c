/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:50:01 by hchang            #+#    #+#             */
/*   Updated: 2021/10/13 20:18:49 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j--;
		}
		i++;
	}
}
