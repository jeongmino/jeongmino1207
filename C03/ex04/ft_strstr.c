/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:39:39 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/19 21:43:44 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ftstrstr(char *str, char *to_find)
{
	char	*r_find;

	r_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (1)
	{
		if (*r_find == '\0')
			return (str - (r_find - to_find));
		if (*str == *r_find)
			r_find++;
		else
			f_find = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}
