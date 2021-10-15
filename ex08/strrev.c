/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:22:59 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/14 13:51:33 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;
	int	*ptr;

	ptr = &i;
	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp =str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	tmp = len + 48;
	return (ptr);
}

int	main(void)
{
	char	arr[] = "apple";
	int	i;

	ft_strrev(arr);
	

	i = 0;
	while (i < 5)
	{
		write(1, &arr[i], 1);
		i++;
	}
	return (0);
}

