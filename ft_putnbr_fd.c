/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:41:39 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/25 15:52:47 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont(int n);
static int	ft_minor(int n);

void	ft_putnbr_fd(int n, int fd)
{
	int		cont;
	int		aux;
	char	tmp;
	char	*str;

	if (n == -2147483648)
		n = ft_minor(n);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	cont = ft_cont(n);
	str = malloc(cont + 1);
	str[cont] = '\0';
	aux = cont;
	while (cont > 0)
	{
		tmp = (n % 10) + 48;
		str[cont -1] = tmp;
		n = n / 10;
		cont--;
	}
	write (fd, str, aux);
}

static int	ft_minor(int n)
{
	int	fd;

	// fd
	write(fd, "-2147483648", 11);
	return (n);
}

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

// int	main(void)
// {
// 	int	fd;
	
// 	fd = open("prueba.txt", O_RDWR);
// 	ft_putnbr_fd(0, fd);
// 	printf("\nel valor de fd es: %d\n", fd);
// 	return (0);
// }
