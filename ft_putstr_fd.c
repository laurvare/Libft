/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:09:29 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/08 20:58:32 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

// int main(void)
// {
//     int fd;
//     size_t len;
    
//     char s[]= "Esto es una cadena";
//     fd = open("caso.txt", O_RDWR);
//     ft_putstr_fd(s, fd);
//     return(0);
// }
