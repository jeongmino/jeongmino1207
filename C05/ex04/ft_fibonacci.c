/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:07:57 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 17:28:01 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	num;

	if (index > 1)
	{
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (num);
	}
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
