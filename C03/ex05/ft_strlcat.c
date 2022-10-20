/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:50:23 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:50:26 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *arr)
{
	unsigned int	idx;

	idx = 0;
	while (arr[idx])
	{
		idx++;
	}
	return (idx);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	dest_len;
	unsigned int	src_len;

	idx = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while ((dest_len + idx < size - 1) && src[idx])
	{
		dest[dest_len + idx] = src[idx];
		idx++;
	}
	dest[dest_len + idx] = '\0';
	if (dest_len < size)
		return (dest_len + src_len);
	return (size + src_len);
}
