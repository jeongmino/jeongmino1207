/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:06:03 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 17:06:58 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	sum = nb;
	if (power > 1)
		return (sum * ft_recursive_power(sum, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (sum);
}
