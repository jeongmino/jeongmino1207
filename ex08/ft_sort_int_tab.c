/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:41:54 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/16 00:34:56 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	sub;
	int	tmp;

	index = 0;
	while (index < size - 1)
	{
		sub = index + 1;
		while (sub < size - 1)
		{
			if (tab[index] > tab[sub])
			{
				tmp = tab[index];
				tab[index] = tab[sub];
				tab[sub] = tmp;
			}
			sub++;
		}
		index++;
	}
	return (tab);
}
