/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojeongmin <ojeongmin@student.42seoul.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:06:29 by ojeongmin         #+#    #+#             */
/*   Updated: 2021/10/19 21:09:13 by ojeongmin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && (s1[i] || s2[i]))
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] - s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}
