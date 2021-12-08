/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:38:06 by junoh             #+#    #+#             */
/*   Updated: 2021/12/08 16:55:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *str)
{
	int		sign;
	int		cnt;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	cnt = 0;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
		cnt++;
	}
	if (cnt > 1)
		sign = 2;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	sum;

	sign = check(str);
	if (sign == 2)
		return (0);
	sum = 0;
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	if (sum > 9223372036854775807 && sign == 1)
		return (-1);
	else if (sum > 9223372036854775808UL && sign == -1)
		return (0);
	else
		return ((int)(sum * sign));
}
