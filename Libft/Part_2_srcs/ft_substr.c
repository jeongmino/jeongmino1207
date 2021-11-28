/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:50:07 by junoh             #+#    #+#             */
/*   Updated: 2021/11/25 19:50:23 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		idx;

	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (0);
	idx = 0;
	while (len-- > 0)
	{
		if (s[start + idx] != '\0')
			substr[idx] = s[start + idx];
		else
			break;
		idx++;
	}
	return (substr);
}
