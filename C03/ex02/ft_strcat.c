/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:49:43 by hchang            #+#    #+#             */
/*   Updated: 2021/10/19 20:49:45 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	idx;

	len = 0;
	idx = 0;
	while (dest[len])
		len++;
	while (src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
	}
	dest[len] = '\0';
	return (dest);
}
