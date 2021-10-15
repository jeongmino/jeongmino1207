/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver.2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:43:10 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/15 00:47:43 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int *numarr, int digit)
{
	int	i;
	char	chNum;
	i = 0;
	while (i < digit)
	{
		chNum = numarr[i] + '0';
		write(1, &chNum, 1);
		i++;
	}
	write(1, " ,", 2);
}

void	ft_upnum(int *numarr, int digit)
{
	int	i;
	int	max;

	i = digit - 1;
	max = 9;
	while (numarr[i] == max)
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

void	ft_print_combn(int nb)
{
	int	arr[10];
	int	i;

	i = -1;
	while (i++ < nb)
		arr[i] = i;
	while (arr[0] != 10 - nb || arr[nb - 1] != 9)
	{
		print_arr(arr, nb);
		arr[nb - 1]++;
		if (arr[nb - 1] > 9)
			ft_upnum(arr, nb);
	}

}
int	main(void)
{
	ft_print_combn(2);
	return (0);
}

