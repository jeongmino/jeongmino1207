/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:19:04 by junoh             #+#    #+#             */
/*   Updated: 2021/10/26 21:48:22 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	destlen;
	int	srclen;

	destlen = ft_strlen(dest);
	srclen = 0;
	while (src[srclen])
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	dest[destlen + srclen] = '\0';
	return (dest);
}

int	ft_memorylen(int size, char **strs, char *sep)
{
	int	mlen;
	int	i;

	i = 0;
	mlen = 0;
	while (i < size)
	{
		mlen = mlen + ft_strlen(strs[i]);
		i++;
	}
	mlen = mlen + (size - 1) * ft_strlen(sep) + 1;
	return (mlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;

	i = 0;
	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		*arr = '\0';
		return (arr);
	}
	arr = (char *)malloc(ft_memorylen(size, strs, sep) * (sizeof(char)));
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			(ft_strcat(arr, sep));
		i++;
	}
	return (arr);
}
