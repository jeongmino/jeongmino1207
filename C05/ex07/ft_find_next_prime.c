/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:21:28 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 17:26:50 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb >= 2 && nb <= 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < 46341 && i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 2147483647)
		return (nb);
	while (nb < 2147483647 && ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
