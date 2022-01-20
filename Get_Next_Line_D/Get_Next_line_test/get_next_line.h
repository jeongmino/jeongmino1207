/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:25:02 by junoh             #+#    #+#             */
/*   Updated: 2022/01/12 15:14:46 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

char    *ft_save_point(char *left_string_buf);

size_t  ft_strlcpy(char *dst, char *src, size_t dstsize);

char    *ft_strchr(char *s, int c);

char    *ft_strjoin(char *s1, char *s2);

char    *ft_get_line_before_nl(char *left_string_buf, int fd);

char    *ft_get_full_line(char *left_string_buf);

int	ft_strlen(char *s);

size_t	ft_strlcat(char *dst, char *src, size_t dstsize);

# endif
