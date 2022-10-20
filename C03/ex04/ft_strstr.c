/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:50:13 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:50:15 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;

	tmp = to_find;
	if (*to_find == '\0')
		return (str);
	while (1)
	{
		if (*tmp == '\0')
			return (str - (tmp - to_find));
		if (*str == *tmp)
			tmp++;
		else
			tmp = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}
