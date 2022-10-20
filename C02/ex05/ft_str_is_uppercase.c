/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:30 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:31 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (1);
	while (str[idx])
	{
		if (str[idx] < 'A' || str[idx] > 'Z')
			return (0);
		idx++;
	}
	return (1);
}
