/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:20:09 by junoh             #+#    #+#             */
/*   Updated: 2021/12/05 20:42:08 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	i = -1;
	while (s1[++i] != '\0' )
		str[i] = s1[i];
	j = -1;
	while (s1[++j] != '\0')
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	s3[] = "Ed Sheeran";
	char	s4[] = "Give me the Shivers";
	char	*strjoin;

//	strjoin = ft_strjoin(s1, s2);
//	printf("%s", strjoin);
	strjoin = ft_strjoin(s3, s4);
	printf("%s", strjoin);
	free(strjoin);
	return (0);
}
