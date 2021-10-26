/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:39:37 by junoh             #+#    #+#             */
/*   Updated: 2021/10/26 21:47:31 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	tmp = (int *)malloc(sizeof(int *) * (max - min));
	if (tmp == NULL)
		return (-1);
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	*range = tmp;
	return (i);
}
