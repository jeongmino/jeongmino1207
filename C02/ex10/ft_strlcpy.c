/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:14:00 by junoh             #+#    #+#             */
/*   Updated: 2021/10/18 00:24:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cnt;

	cnt = 0;
	while (src[cnt])
		cnt++;
	i = 0;
	if (size == 1)
	{
		dest[0] = '\0';
		return (cnt);
	}
	while ((size != 0) && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cnt);
}
