/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:12:11 by junoh             #+#    #+#             */
/*   Updated: 2021/11/19 14:51:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		cnt;
	size_t	idx;

	cnt = 0;
	while (src[cnt])
		cnt++;
	if (dstsize == 1)
	{
		dst[0] = '\0';
		return (cnt);
	}
	idx = 0;
	while (dstsize != 0 && idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (cnt);
}
