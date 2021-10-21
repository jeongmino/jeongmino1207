/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:17:18 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/19 21:44:21 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printlen(char *arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	i = 0;
	destlen = 0;
	destlen = ft_printlen(dest);
	while (src[i])
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (dest);
}
