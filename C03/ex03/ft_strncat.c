/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:50:01 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:50:03 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len;
	int	idx;

	len = 0;
	idx = 0;
	while (dest[len])
		len++;
	while (nb && src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
		nb--;
	}
	dest[len] = '\0';
	return (dest);
}
