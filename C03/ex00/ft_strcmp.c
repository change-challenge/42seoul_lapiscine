/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:49:14 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:49:16 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] || s2[idx])
	{
		if (s1[idx] > s2[idx])
			return (s1[idx] - s2[idx]);
		else if (s1[idx] < s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	return (0);
}
