/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:14:01 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/06 18:04:28 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int	c;
	int	result;

	c = 'T';
	printf("Es este la palabra original %c\n", c);
	result = ft_tolower(c);
	printf("Esto es a lo que lo convierte %c\n", result);
	return (0);
}*/
