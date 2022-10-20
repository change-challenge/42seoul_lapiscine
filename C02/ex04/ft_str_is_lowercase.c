/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:18 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:20 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (1);
	while (str[idx])
	{
		if (str[idx] < 'a' || str[idx] > 'z')
			return (0);
		idx++;
	}
	return (1);
}
