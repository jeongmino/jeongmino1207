/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minsuki2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:35:08 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/12 19:16:59 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

int	power_10(int number)
{
	int	result;
	
	result = 1;
	while (number > 1)
	{
		result = result * 10;
		number--;
	}
	return (number);
}


void	non_zero(int nb)
{
	int	Num;
	int	a;
	int	tmp;
	int 	cnt;
	
	cnt = 0;
	while (power_10(nb -1) < tmp < power_10(nb))
	{	
		a = tmp % 10;
		Num = tmp;
		while (tmp != 0)
		{
			tmp = tmp / 10;
			b = tmp % 10;
			if (b < a)
			{
				a = b;
				cnt++;
				if(cnt == nb - 1) ft_putnbr(Num);
			}
			else	break ;		
		}
	}
}



int	main(void)
{
	non_zero(3)
}

	
