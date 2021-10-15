/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:39:01 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/12 18:21:52 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	ft_num_power(int n)
{
	int	sum;
	sum = 1;
	while ( n > 1)
	{
		sum = sum * 10;
		n--;
	}
	return sum;
}

void	ft_putnbr(int nb)
{
	if(nb < 10)
	{
		putchar(nb + 48);
		return ;
	}
	else
		putchar(((nb % 10) + 48));
		ft_putnbr(nb / 10);
}

void	ft_print_arr(int nb)
{
	int	cnt;
	int	tmp;
	int	arr[10];
	int	i;
	
	i = 0;
	cnt = 0;
	while (nb > 0)
	{
		cnt = cnt + (nb - 1) * ft_num_power(nb);
		nb--;
	}
	tmp = cnt;
	while(nb > 0)
	{
		arr[nb - 1] = (nb % 10) + '0';
		nb = nb /10;
		nb--;
	}
	while(i < nb)
	{
		if (arr[i] == '\0')	
		break;	
		write(1, &arr[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_print_arr(3);
	return (0);
}
