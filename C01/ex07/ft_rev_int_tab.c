/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:36:18 by hchang            #+#    #+#             */
/*   Updated: 2021/10/13 19:48:11 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	cnt;
	int	tmp;

	idx = 1;
	cnt = size / 2;
	while (cnt)
	{
		tmp = tab[size - idx];
		tab[size - idx] = tab[idx - 1];
		tab[idx - 1] = tmp;
		idx++;
		cnt--;
	}
}
