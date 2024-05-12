/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:42:13 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/12 19:14:57 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    int fd;
    size_t len;

    char s[]= "Esto es una cadena";
    fd = open("caso.txt", O_RDWR);
    ft_putstr_fd(s, fd);
    printf("num fd: %d | result: %s", fd, s);
    close(fd);
    return(0);
}*/
