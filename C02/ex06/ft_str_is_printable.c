/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:40 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:41 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (1);
	while (str[idx])
	{
		if (str[idx] < ' ' || str[idx] == 127)
			return (0);
		idx++;
	}
	return (1);
}
