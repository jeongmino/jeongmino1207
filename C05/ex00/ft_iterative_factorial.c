/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:46:52 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 16:56:32 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}
