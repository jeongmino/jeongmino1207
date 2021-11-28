/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v2_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:10:41 by junoh             #+#    #+#             */
/*   Updated: 2021/11/27 14:57:19 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_match(char const s1,char const *set)
{
	int i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (s1 == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*buf;
	int 	len;
	int		i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (0);
	buf = str;
	len = ft_strlen(set);
	i = 0;
	while (s1[i])
	{
		if (i < len || i > ft_strlen(s1) - len)
		{
			if (ft_match(*(s1 + i), set))
				*str++ = *(s1 + i);
		}
		else
			*str++ = *(s1 + i);
		i++;
	}
	return (buf);
}
