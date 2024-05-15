/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:41:39 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/15 20:08:58 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
    write(fd, &d, 1);
}
/*
int main(void)
{
    int fd;
    fd = open("caso.txt", O_RDWR);
    ft_putnbr_fd('A', fd);
    printf("el valor de fd es: %d\n", fd);
    return (0);
}
*/