/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:37:22 by junoh             #+#    #+#             */
/*   Updated: 2021/10/18 00:15:22 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(char c)
{
	int	hx;
	int	head;

	head = c / 16 + '0';
	hx = (int)c % 16;
	if (hx > 9)
		hx = 'a' - 10 + hx;
	write(1, "\\", 1);
	write(1, &head, 1);
	write(1, &hx, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_print_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
