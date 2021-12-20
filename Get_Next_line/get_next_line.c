/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:27:24 by junoh             #+#    #+#             */
/*   Updated: 2021/12/20 19:05:18 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*head;
	char			*buf[BUFFER_SIZE]; // nullstring trminate
	int				read_size;
	// add more variables
	
	if (fd < 0 || BUFFER_SIZE < 0)
		return (0);
	read_size = 0;
	while (read_size % BUFFER_SIZE == 0 || read_size == -1)
	{
		read_size = ft_find_and_read(fd, buf, BUFFER_SIZE);
}

int	ft_find_and_read(int fd, char *buf, int BUFFER_SIZE)
{
	int		size;
	char	*tmp;

	if(read(fd, buf, BUFFER_SIZE) <= 0) // if function find EOF or ERROR 
		return (-1);
	if (ft_strichr(s, '\n') + 1 == BUFFER_SIZE)
		return (
}

int	ft_strichr(const char *s, char c)
{
	int		index;

	index = 0;
	while (*s)
	{
		if (*s == c)
			return (index);
		index++;
		s++;
	}
	if (c == 0)
		return (index);
}

		

