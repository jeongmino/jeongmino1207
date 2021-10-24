/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_queens_puzzle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:48:10 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 19:33:10 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_queens(int x, int y, int *arr);
void	ft_print_arr(int *arr);
void	ft_place_queens(int x, int *arr, int *total);
int		ft_ten_queens_puzzle(void);

int	ft_check_queens(int x, int y, int *arr)
{
	int	n;
	int	len;

	n = 0;
	while (n < x)
	{
		if (arr[n] == y)
			return (0);
		if (arr[n] > y)
			len = arr[n] - y;
		else
			len = y - arr[n];
		if (len == x - n)
			return (0);
		n++;
	}
	return (1);
}

void	ft_print_arr(int *arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_place_queens(int x, int *arr, int *total)
{
	int	y;

	if (x == 10)
	{
		(*total)++;
		ft_print_arr(arr);
	}
	y = 0;
	while (y < 10)
	{
		if (ft_check_queens(x, y, arr))
		{
			arr[x] = y;
			ft_place_queens(x + 1, arr, total);
		}
		y++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	arr[10];
	int	total;

	total = 0;
	x = 0;
	ft_place_queens(x, arr, &total);
	return (total);
}
