/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:51:05 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 20:52:28 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *base)
{
	char	*buffer;
	int		idx;
	int		sub;

	buffer = base;
	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '-' || base[idx] == '+'
			|| (base[idx] >= '\t' && base[idx] <= '\r') || base[idx] == ' ')
			return (0);
		sub = idx + 1;
		while (base[sub])
		{
			if (buffer[idx] == base[sub])
				return (0);
			sub++;
		}
		idx++;
	}
	return (idx);
}

int	str_cmp_base(char *base, char c)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == c)
			return (idx);
		idx++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	radix = ft_check(base);
	if (radix < 2)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (str_cmp_base(base, *str) != (-1) && *str)
	{
		result = (result * radix) + (str_cmp_base(base, *str));
		str++;
	}
	return (result * sign);
}
