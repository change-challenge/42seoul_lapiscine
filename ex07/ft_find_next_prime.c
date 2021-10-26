/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:54:20 by hchang            #+#    #+#             */
/*   Updated: 2021/10/23 19:58:50 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	idx;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	idx = 3;
	while (idx <= nb / idx)
	{
		if (nb % idx == 0)
			return (0);
		idx += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 2147483647)
		return (nb);
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
