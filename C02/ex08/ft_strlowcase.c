/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:41:02 by hchang            #+#    #+#             */
/*   Updated: 2021/10/18 11:41:04 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	if (!str[idx])
		return (str);
	while (str[idx])
	{
		if (is_alpha_up(str[idx]))
			str[idx] += 32;
		idx++;
	}
	return (str);
}
