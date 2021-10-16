/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_comb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:21:10 by junoh             #+#    #+#             */
/*   Updated: 2021/10/16 17:03:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_numb_head(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
}

void	ft_put_numb_tail(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	count_h;
	int	count_t;
	int	a;
	int	b;

	a = 0;
	b = 0;
	count_h = -1;
	count_t = 1;
	while (count_h++ <= 97)
	{
		while (count_t <= 99)
		{
			a = (count_h / 10) + 48;
			b = (count_h % 10) + 48;
			ft_put_numb_head(a, b);
			a = (count_t / 10) + 48;
			b = (count_t % 10) + 48;
			ft_put_numb_tail(a, b);
			count_t++;
		}
		count_t = count_h + 1;
	}
	write(1, "98 99", 5);
}
