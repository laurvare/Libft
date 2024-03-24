/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:38:26 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/24 18:18:00 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*/
int	main(void)
{
	int	result;
	int	a;

	a = 100;
	result = ft_isprint(a);
	if (ft_isprint(a) == 1)
	{
		printf ("%d Es un caracter imprimible de ASCII", a);
	}
	else
	{
		printf ("%d No es un caracter imprimible de ASCII", a);
	}
	return (0);
}*/

/*int	main(void)
{
	int	a;

	a = 100;
	if (ft_isprint(a))
	{
		printf ("%d Es un caracter imprimible de ASCII", a);
	}
	else
	{
		printf ("%d No es un caracter imprimible de ASCII", a);
	}
	return (0);
}*/
