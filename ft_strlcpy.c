/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:22:51 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/04 19:19:53 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// 	printf("El destino es: %s\n", p_desti);
// 	ptr = ft_strlcpy(p_desti, p_orig, 6);
// 	printf("El destino ahora es: %s, %zu\n", p_desti, ptr);
// }
