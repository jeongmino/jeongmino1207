/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver.2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:43:10 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/16 17:07:59 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int *numarr, int digit)
{
	int	i;
	int	chnum;

	i = 0;
	while (i < digit)
	{
		chnum = 0;
		chnum = numarr[i] + 48;
		write(1, &chnum, 1);
		i++;
	}
	write(1, ", ", 2);
}

void	print_arr_last(int *numarr, int digit)
{
	int	i;
	int	chnum;

	i = 0;
	while (i < digit)
	{
		chnum = 0;
		chnum = numarr[i] + 48;
		write(1, &chnum, 1);
		i++;
	}
}

void	ft_upnum(int *numarr, int digit)
{
	int	i;
	int	max;

	i = digit - 1;
	max = 9;
	while (numarr[i] - 1 == max || numarr[i] == max)
	{
		i--;
		max--;
	}
	numarr[i]++;
	while (i < digit - 1)
	{
		numarr[i + 1] = numarr[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < n)
		arr[i] = i;
	while (!(arr[0] == 10 - n && arr[n - 1] == 9))
	{
		print_arr(arr, n);
		arr[n - 1]++;
		if (arr[n - 1] > 9)
			ft_upnum(arr, n);
	}
	print_arr_last(arr, n);
}
