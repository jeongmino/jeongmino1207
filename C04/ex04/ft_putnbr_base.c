/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:53:33 by junoh             #+#    #+#             */
/*   Updated: 2021/10/24 21:14:20 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change(unsigned int nbr, char *base, unsigned int n)
{
	int	last;

	if (nbr == 0)
		return ;
	last = nbr % n;
	ft_change(nbr / n, base, n);
	ft_putchar(base[last]);
}

int	ft_check(char *base)
{
	int		n;
	char	*tmp;

	n = 0;
	while (base[n])
	{
		if (base[n] == '+' || base[n] == '-')
			return (0);
		tmp = &base[n];
		while (*tmp++)
			if (*tmp == base[n])
				return (0);
		n++;
	}
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_check(base) > 1)
	{
		if (nbr > 0)
			ft_change(nbr, base, ft_check(base));
		else if (nbr == 0)
			ft_putchar(base[0]);
		else
		{
			ft_putchar('-');
			nbr = nbr * -1;
			ft_change(nbr, base, ft_check(base));
		}
	}
}
