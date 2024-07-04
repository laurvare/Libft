/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:53:20 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 21:13:15 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenate one string to another
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	max_chars;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	max_chars = dstsize - dst_len - 1;
	while (i < src_len && i < max_chars)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

// #include <bsd/string.h>

// int	main() 
// {
// 	char dst1[20] = "pqrstuvwxyz";
// 	char dst2[20] = "pqrstuvwxyz";
// 	char src[5] = "abcd";
// 	size_t dstsize1 = 11;
// 	size_t dstsize2 = 11;

// 	size_t total_length1 = ft_strlcat(dst1, src, dstsize1);
// 	size_t total_length2 = strlcat(dst2, (const char *)src, dstsize2);

// 	printf("Propia: Cadena concatenada: %s\n", dst1);
// 	printf("ORIG: Cadena concatenada: %s\n", dst2);
// 	printf("Propia: Longitud total: %zu\n", total_length1);
// 	printf("ORIG: Longitud total: %zu\n", total_length2);
// 	return 0;
// }
//
//USAR LA FLAG -lbsd