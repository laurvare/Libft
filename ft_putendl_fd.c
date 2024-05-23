/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:25:58 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/23 20:09:03 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int main(void)
{
    int fd;
    size_t len;

    char s[]= "Esto es una cadena";
    fd = open("caso.txt", O_RDWR);
    ft_putendl_fd(s, fd);
    close(fd);
    return(0);
}*/
