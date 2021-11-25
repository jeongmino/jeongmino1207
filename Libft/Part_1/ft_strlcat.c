/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:58:36 by junoh             #+#    #+#             */
/*   Updated: 2021/11/19 14:50:20 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = 0;
	while (src[i])
	{
		src_len++;
		i++;
	}
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	while ((dst_len + i < dstsize - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len < dstsize)
		return (dst_len + src_len);
	return (dstsize + src_len);
}
