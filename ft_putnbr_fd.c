/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:41:39 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/26 17:03:16 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont(int n)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		cont;
	int		aux;
	char	str[50];

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
	cont = ft_cont(n);
	str[cont] = '\0';
	aux = cont;
	while (cont > 0)
	{
		str[cont -1] = (n % 10) + 48;
		n = n / 10;
		cont--;
	}
	write (fd, str, aux);
}

// int	main(void)
// {
// 	int	fd;
// 	fd = open("prueba.txt", O_RDWR);
// 	ft_putnbr_fd(5, 1);
// 	//printf("\nel valor de fd es: %d\n", fd);
// 	return (0);
// }
