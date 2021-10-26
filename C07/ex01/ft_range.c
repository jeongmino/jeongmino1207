/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:25:04 by junoh             #+#    #+#             */
/*   Updated: 2021/10/26 21:41:49 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	num;
	int	i;

	num = min;
	i = 0;
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL || (min >= max))
		return (NULL);
	while (num < max)
	{
		arr[i] = num;
		i++;
		num++;
	}
	return (arr);
}
