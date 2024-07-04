/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:42:13 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 20:01:08 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes a character to a specified file descriptor using write
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int main(void)
// {
//     int fd;
//     fd = open("prueba.txt", O_RDWR);
//     ft_putchar_fd('A', fd);
//     printf("el valor de fd es: %d\n", fd);
//     return (0);
// }
