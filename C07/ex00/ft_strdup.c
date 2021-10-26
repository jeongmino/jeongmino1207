/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:17:01 by junoh             #+#    #+#             */
/*   Updated: 2021/10/26 21:37:23 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	else
	{
		while (str[i])
		{
			dup[i] = str[i];
			i++;
		}
	}
	dup[i] = '\0';
	return (dup);
}
