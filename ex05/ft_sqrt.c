/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:21:34 by hchang            #+#    #+#             */
/*   Updated: 2021/10/23 12:21:38 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		else if (result >= 46341)
			return (0);
		result++;
	}
	return (0);
}
