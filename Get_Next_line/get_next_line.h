/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:25:02 by junoh             #+#    #+#             */
/*   Updated: 2021/12/19 18:16:55 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

typedef struct	s_list
{
	int				fd;
	char			*next_line;
	struct s_list	*next;
}				t_list;
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);



# endif
