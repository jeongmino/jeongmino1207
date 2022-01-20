/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:25:02 by junoh             #+#    #+#             */
/*   Updated: 2022/01/08 22:07:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

char    *ft_strchr(const char *s, int c);

char    *ft_strjoin(char *s1, char *s2);

char    *ft_nl_terminate(char *buffer, char *string_buf, char *save_point);

char    *ft_one_sentence(int fd, char *buffer_read, char *save_point);

int	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

# endif
