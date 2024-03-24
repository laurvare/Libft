/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:52:22 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/22 16:42:43 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 'o';
	if (ft_isascii(a))
	{
		printf ("%c Es el caracter ASCII \n", a);
	}
	else
	{
		printf ("%c No es un caracter ASCII \n", a);
	}
	return (0);
}
*/