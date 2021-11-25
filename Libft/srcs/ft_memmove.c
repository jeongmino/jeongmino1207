/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:23:15 by junoh             #+#    #+#             */
/*   Updated: 2021/11/25 13:43:50 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (dest == src || n == 0)
		return (dest);
	ptr_dest = dest;
	ptr_src = src;
	if (dest < src)
	{
		while (n-- > 0)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		ptr_src += n - 1;
		ptr_dest += n - 1;
		while (n-- > 0)
			*ptr_dest-- = *ptr_src--;
	}
	return (dest);
}
