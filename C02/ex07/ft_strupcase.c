/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:49 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:40:50 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (str);
	while (str[idx])
	{
		if (is_alpha_low(str[idx]))
			str[idx] -= 32;
		idx++;
	}
	return (str);
}
