/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:27:24 by junoh             #+#    #+#             */
/*   Updated: 2021/12/27 13:17:03 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*head;
	char			*buf[BUFFER_SIZE]; // nullstring trminate
	char			*line;
	int				read_size;
	// add more variables

	if (fd < 0 || BUFFER_SIZE < 0)
		return (0);
	line = ft_find_and_read(fd, buf, BUFFER_SIZE);

}

char	*ft_find_and_read(int fd, char *buf, int BUFFER_SIZE)
{
	char	*tmp;
	int		idx;

	if(read(fd, buf, BUFFER_SIZE) <= 0) // if function find EOF or ERROR
		return (ft_strdup(""));
	while (idx != BUFFER_SIZE)
	{
		idx = 0;
		while (idx < BUFFER_SIZE && buf[idx] != '\n')
			idx++;
		tmp = ft_copy_and_paste(tmp, buf, idx, BUFFER_SIZE);
	}
}

char	*ft_copy_and_paste(char *dst, char *src, int idx, int BUFFER_SIZE)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(dst)
