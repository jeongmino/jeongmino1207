/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:40:39 by junoh             #+#    #+#             */
/*   Updated: 2022/01/08 13:43:10 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>



int main(void)
{
    size_t     byte;
    int     fd;
    
    char *buf;

    buf = malloc(sizeof(char) * 5);    
    fd = open("a.txt", O_RDONLY);
    byte = read(fd, buf, 5);
    if (byte == 5)
        {
            printf("ya\n");
            printf("%s\n", buf);
        }
    else
        {
            printf("??\n");
            printf("%zu\n", byte); 
        }
    printf("%s\n", buf);
    return (0);
}