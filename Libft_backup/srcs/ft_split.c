/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:01:08 by junoh             #+#    #+#             */
/*   Updated: 2021/11/28 20:26:32 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	if (*s != c)
		cnt++;
	while (*s)
	{
		if (*s == c)
		{
			if (*(s + 1) != c)
				cnt++;
		}
		s++;
	}
	return (cnt);
}

static	void	*ft_strfree(char **strs, int stridx)
{
	int	i;

	i = 0;
	while (i <= stridx)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static	void	ft_word_make(char *dst, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}	

static	char	**ft_split2(char **strs, char const *s, char c, int cnt)
{
	int		len ;
	int		stridx;
	char	*buf;

	stridx = 0;
	while (stridx < cnt)
	{
		len = 0;
		while (*s != '\0' && *s != c)
			s++;
		while (*s != '\0' && *s == c)
		{
			len++;
			s++;
		}
		strs[stridx] = (char *)malloc(sizeof(char) * (len + 1));
		if (strs[stridx] == NULL)
			return (ft_strfree(strs, stridx));
		buf = (char *)s - len;
		ft_word_make(strs[stridx], buf, len);
		stridx++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_count(s, c)));
	if (strs == NULL)
		return (NULL);
	strs = ft_split2(strs, s, c, ft_count(s, c));
	return (strs);
}
