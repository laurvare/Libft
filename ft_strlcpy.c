/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:22:51 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 20:56:20 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copy a source string to a destination string
//Ensuring that the destination string does not overflow
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	largoorigen;

	i = 0;
	largoorigen = ft_strlen(src);
	if (dstsize == 0)
		return (largoorigen);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (largoorigen);
}

// int	main(void)
// {
// 	char	p_orig[]= "1111111111";
// 	char	p_desti[]= "2222222222";
// 	size_t	ptr;

// 	printf("DEST: %s | ORG: %s\n", p_desti, p_orig);
// 	ptr = ft_strlcpy(p_desti, p_orig, 6);
// 	printf("DEST: %s | ORG: %s %zu\n", p_desti, p_orig, ptr);
// 	return (0);
// }
