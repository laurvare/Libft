/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:52:22 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 17:41:14 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Determines if a character is an ASCII character
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	a;

// 	a = 'o';
// 	if (ft_isascii(a))
// 		printf ("%c is ASCII \n", a);
// 	else
// 		printf ("%c No ASCII \n", a);
// 	return (0);
// }
