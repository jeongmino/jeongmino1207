/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:32:37 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/13 09:19:21 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}	
	if (nb < 10)
	{
		ft_putchar(nb + 48);
//		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putchar((nb % 10) + 48);
		ft_putnbr(nb / 10);
//	ft_putchar((nb % 10) + 48);
}
