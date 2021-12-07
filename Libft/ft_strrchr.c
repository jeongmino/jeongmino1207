/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:08:58 by junoh             #+#    #+#             */
/*   Updated: 2021/12/03 16:37:01 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buffer;

	if (c >= 126)
		return ((char *)s);
	buffer = 0;
	if (c == 0)
	{
		buffer = (char *)(s + ft_strlen(s));
		return (buffer);
	}
	while (*s)
	{
		if (*s == c)
			buffer = (char *)s;
		s++;
	}
	return (buffer);
}
