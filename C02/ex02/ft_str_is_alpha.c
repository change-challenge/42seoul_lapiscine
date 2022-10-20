/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:00 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:02 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (1);
	while (str[idx])
	{
		if ((str[idx] >= 'a' && str[idx] <= 'z')
			|| (str[idx] >= 'A' && str[idx] <= 'Z'))
		{
			idx++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
