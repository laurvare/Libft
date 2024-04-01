/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:53:20 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/01 19:12:19 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	max_chars;

	src_len = strlen(src);
	dst_len = strlen(dst);
	i = 0;

	if (dstsize == 0)
		return (src_len + dst_len);

	max_chars = dstsize - dst_len - 1;
	if (i < src_len && i < max_chars)
	{
		i++;
		dst[dst_len + i] = src[i];
	}
    dst[dst_len + i] = '\0';
    return (src_len + dst_len);
}

// int main() {
//     char dst[20] = "Hola, ";
//     char src[] = "mundo!";
//     size_t dstsize = sizeof(dst);

//     size_t total_length = my_strlcat(dst, src, dstsize);

//     printf("Cadena concatenada: %s\n", dst);
//     printf("Longitud total: %zu\n", total_length);

//     return 0;
}



// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	char	*p_dst;
// 	char	*p_orig;
// 	size_t	i;
// 	size_t	largoorigen;

// 	i = 0;
// 	largoorigen = ft_strlen(src);
// 	if (dstsize == 0)
// 		return (largoorigen);

// 	while (i < dstsize - 1 && src[i] != '\0')
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	if (i < dstsize)
// 		dst[i] = '\0';
// 	return (largoorigen);

// }

int	main(void)
{
	char	p_orig[] = "de Henares";
	char	p_desti[] = "Azuqueca";
	size_t	size;
	size_t length;

	sizeof(p_desti);
	printf("El origen es: %s\n", p_orig);
	printf("El destino es: %s\n", p_desti);
	ft_strlcat(p_desti, p_orig, 25);
	printf("La concatenación resultante es %s, %zu\n", p_desti);
	return (0);
}

// //     size_t size = sizeof(str1);
// //     size_t length = strlcat(str1, str2, size);
// //     printf("Longitud de la cadena concatenada: %zu\n", length);
// // }


