/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:49:35 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:49:37 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	idx;

	idx = 0;
	while ((s1[idx] || s2[idx]) && n > 0)
	{
		if (s1[idx] > s2[idx])
			return (s1[idx] - s2[idx]);
		else if (s1[idx] < s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
		n--;
	}
	return (0);
}
