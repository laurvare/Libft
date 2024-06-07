/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:16:47 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/06 16:24:22 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = (c - 32);
	return (c);
}

// int main (void)
// {
//     int caracter = '@';
//     int caracter_convertido;

//     caracter_convertido = ft_toupper(caracter);
//     printf("esto el caracter inical:%c\n", caracter);
//     printf("esto en la conversion:%c\n", caracter_convertido);
//     return(0);
// }