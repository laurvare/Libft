/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:41:15 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 17:38:26 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is alphanumeric (letter or digit)//
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	result;
// 	int	c;

// 	c = 'y';
// 	result = ft_isalnum(c);
// 	if (ft_isalnum(c) == 1)
// 		printf ("%d It is an alphanumeric value", c);
// 	else
// 		printf ("%d No it is an alphanumeric value", c);
// 	return (0);
// }
