/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:38:06 by junoh             #+#    #+#             */
/*   Updated: 2021/11/19 14:41:09 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sum;
	int	sign;
	int	cnt;

	while (*str >= '\t' && *str <= '\r' || *str == ' ')
		str++;
	cnt = 0;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		cnt++;
		str++;
	}
	if (cnt > 1)
		return (0);
	sum = 0;
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	return (sum * sign);
}
