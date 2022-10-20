/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:07 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:08 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (1);
	while (str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9')
		{
			idx++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
