/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:37:50 by junoh             #+#    #+#             */
/*   Updated: 2021/11/19 14:45:55 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*ptr_dst;
	const unsigned char		*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
	if (ptr_dst == ptr_src)
		return (ptr_dst);
	while (n--)
		*ptr_dst++ = *ptr_src++;
	return (ptr_dst);
}
