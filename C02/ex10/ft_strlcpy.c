/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:41:24 by hchang            #+#    #+#             */
/*   Updated: 2021/10/27 13:25:17 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	src_len;

	idx = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (idx < (size - 1) && src[idx] != '\0')
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
	}
	return (src_len);
}
