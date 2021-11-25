/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:44:49 by junoh             #+#    #+#             */
/*   Updated: 2021/11/19 14:43:07 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)buf)[i] == (unsigned char)c)
			return ((void *)buf + i);
		i++;
	}
	return ((void *)0);
}
