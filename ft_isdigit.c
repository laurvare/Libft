/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:52:41 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 17:42:37 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is a digit in the base 10
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 45;
// 	if (ft_isdigit(c))
// 		printf ("%d it is a decimal digit", c);
// 	else
// 		printf ("%d is not a decimal digit", c);
// 	return (0);
// }
