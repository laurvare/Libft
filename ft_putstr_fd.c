/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:09:29 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/06 18:10:30 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
// int	main(void)
// {
//	 int fd;
//	 size_t len;

//	 char s[]= "Esto es una cadena";
//	 fd = open("prueba.txt", O_RDWR);
//	 ft_putstr_fd(s, fd);
//	 close(fd);
//	 return(0);
// }
