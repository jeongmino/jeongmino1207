/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:33:07 by junoh             #+#    #+#             */
/*   Updated: 2021/10/21 21:34:38 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_two(char *str)
{
	int	len;
	int	index;
	int	sub;

	len = 0;
	index = 0;
	while (str[len])
		len++;
	while (str[index])
	{
		sub = index + 1;
		while (str[sub])
		{
			if (str[index] == str[sub])
				return (0);
			sub++;
		}
		index++;
	}
	return (len);
}

int	ft_check_one(char *str)
{
	int	size;
	int	i;

	i = 0;
	size = ft_check_two(str);
	if (size <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	return (size);
}

void	ft_base_cal(int nbr, char *str, int size)
{
	int		n;
	char	c;

	n = nbr;
	if (n >= size)
		ft_base_cal(n / size, str, size);
	c = str[n % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_check_one(base);
	if (!(size))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, &base[2], 1);
		nbr = 147483648;
	}
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	ft_base_cal(nbr, base, size);
	return ;
}
