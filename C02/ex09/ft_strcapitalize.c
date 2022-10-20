/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:41:12 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:41:14 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_alpha_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (is_alpha_up(str[idx]))
			str[idx] += 32;
		idx++;
	}
	idx = 0;
	if (str[idx] && is_alpha_low(str[idx]))
		str[idx] -= 32;
	while (str[idx + 1])
	{
		if (!is_alpha_low(str[idx])
			&& !is_alpha_up(str[idx]) && !is_num(str[idx]))
		{
			if (is_alpha_low(str[idx + 1]))
				str[idx + 1] -= 32;
		}
		idx++;
	}
	return (str);
}
