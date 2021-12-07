/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:50:07 by junoh             #+#    #+#             */
/*   Updated: 2021/12/07 00:11:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		idx;

	if (!*s || start >= (unsigned int)ft_strlen(s))
		return (0);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (0);
	idx = 0;
	while (s[start + idx] != '\0' && len-- > 0)
	{
		if (s[start + idx] != '\0')
			substr[idx] = s[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
