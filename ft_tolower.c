/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:14:01 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 11:25:02 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;
// 	int	result;

// 	c = 'T';
// 	printf("Palabra original: %c\n", c);
// 	result = ft_tolower(c);
// 	printf("Lo convierte a:  %c\n", result);
// 	return (0);
// }
