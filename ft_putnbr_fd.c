/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:41:39 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/24 20:49:59 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
    }
    if (n < 10 && n > -1)
    {
    n = n + 48;
    write(fd, &n, 1);
    return ;
    }
    int cont = 0;
    int aux = n;
    while (n > 0)
    {
        n = n /10;
        cont++;
    }    
    char str[cont +1];
    str[cont] = '\0';
    n = aux;
    aux = cont;
    char tmp;
    while(cont > 0)
    {
        tmp = (n%10) + 48;
        str[cont-1] = tmp;
        n = n / 10;
        cont--;
    }
    write (fd, str, aux);
}

int main(void)
{
    int fd;
    fd = open("prueba.txt", O_RDWR);
    ft_putnbr_fd(2147483647, fd);
    printf("el valor de fd es: %d\n", fd);
    return (0);
}
