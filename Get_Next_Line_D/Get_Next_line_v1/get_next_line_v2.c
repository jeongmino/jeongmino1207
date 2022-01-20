/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:23:04 by junoh             #+#    #+#             */
/*   Updated: 2022/01/09 15:44:22 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	size_t	srclen;
	size_t	i;

	total = 0;
	while (total < dstsize && dst[total])
		total++;
	srclen = ft_strlen(src);
	i = total;
	while (*src != '\0' && i + 1 < dstsize)
		*(dst + i++) = *src++;
	if (i < dstsize)
		dst[i] = '\0';
	return (total + srclen);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		idx;

	src_len = 0;
	while (src[src_len])
		src_len++;
	idx = 0;
	while (idx + 1 < dstsize && idx < src_len)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize > 0)
		dst[idx] = '\0';
	return (src_len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}

char	*ft_strjoin(char *string_buf, char *buffer_read)
{
	char	*str;
	int		len1;
	int		len2;

	if (!string_buf || !buffer_read)
		return (0);
	len1 = ft_strlen(string_buf);
	len2 = ft_strlen(buffer_read);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, string_buf, len1 + 1);
	ft_strlcat(str + len1, buffer_read, len2 + 1);
	free(string_buf);
	return (str);
}

char	*ft_nl_terminate(char *buffer_read, char *string_buf, char *save_point)
{
	int		len;
	char	*end_string;

	len = 0;
	save_point = buffer_read;
	while (*buffer_read != '\n')
	{
		buffer_read++;
		save_point++;
		len++;
	}
	//save_point += 1;
	end_string = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(end_string, buffer_read - (len), len + 1);
	end_string = ft_strjoin(string_buf, end_string);
	return (end_string);
}

char	*ft_one_sentence(int fd, char *buffer_read, char *save_point)
{
	ssize_t	byte;
	char	*string_buf;

	if (save_point != NULL)
		string_buf = save_point;
	else
		string_buf = (char *)malloc(sizeof(char) * 1);
	string_buf = (char *)malloc(sizeof(char) * 1);
	if (!string_buf)
		return (NULL);
	byte = read(fd, buffer_read, BUFFER_SIZE);
	if (byte < 0)
		return (NULL);
	while (!ft_strchr(buffer_read, '\n') && byte != 0)
	{
		string_buf = ft_strjoin(string_buf, buffer_read);
		byte = read(fd, buffer_read, BUFFER_SIZE);
		if (byte < 0)
			return (string_buf);
	}
	if (byte == 0)
		return (string_buf);
	return (ft_nl_terminate(buffer_read, string_buf, save_point));
}

char	*get_next_line(int fd)
{
	char		*buffer_read;
	static char	*save_point;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buffer_read = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer_read)
		return (NULL);
	buffer_read[BUFFER_SIZE] = '\0';
	return (ft_one_sentence(fd, buffer_read, save_point));
}

#include <fcntl.h>

int	main(void)
{
	size_t	fd;

	fd = open("a.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	return (0);
}
