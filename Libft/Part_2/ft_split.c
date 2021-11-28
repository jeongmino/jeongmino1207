/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:01:08 by junoh             #+#    #+#             */
/*   Updated: 2021/11/27 15:40:38 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char const *s, char c)
{
	int cnt;

	cnt = 0;
	if (*s != c)
		cnt++;
	while(*s)
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

int		ft_word_count(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}
/*
char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_count(s, c)));
	if (strs == NULL)
		return (NULL);
	strs = ft_split2(strs, s, c);
	return (strs);
}
*/




#include <stdio.h>

int	main(void)
{
	char s[] = "0I00love0you0";
	int	cnt;

	printf("%d\n",ft_count(s,'0'));
	printf("%d\n",ft_word_count(s,'0'));
	return (0);
}
