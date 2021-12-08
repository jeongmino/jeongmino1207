/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:14:52 by junoh             #+#    #+#             */
/*   Updated: 2021/12/08 12:51:05 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	size_t	srclen;
	size_t	i;

	total = 0;
	while (dst[total])
	{
		if (total >= dstsize)
			break ;
		total++;
	}
	srclen = ft_strlen(src);
	i = total;
	while (*src != '\0' && i < dstsize + 1)
		*(dst + i++) = *src++;
	dst[i] = '\0';
	if (total > dstsize)
		return (dstsize + srclen);
	return (total + srclen);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	int		n;

	str = (char *)malloc(sizeof(*str) * 15);
	memset(str, 0, 15);
	memset(str, 'r', 6);
	str[11] = 'a';
	n = ft_strlcat(str, "lorem", 15);
	printf("%d\n", n);
	write(1, str, 15);
	return (0);
}
