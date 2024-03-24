/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:24:37 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/24 17:42:19 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		++ptr;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[50];

// 	strcpy(str, "Esto es una prueba personal");
// 	printf("Contenido original:\n");
// 	printf("%s\n", str);
// 	ft_memset(str, '$', 10);
// 	printf("Contenido modificado:\n");
// 	printf("%s\n", str);
// 	return (0);
// }
