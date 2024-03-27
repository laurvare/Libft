/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:22:51 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/27 18:27:49 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (&i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (&i);
}

// int	main(void)
// {
// 	char	p_orig[] = "1111111";
// 	char	p_desti[] = "aaaaaaaa";

// 	printf("El destino es: %s\n", p_desti);
// 	ft_strlcpy(p_desti, p_orig, 6);
// 	printf("El destino ahora es: %s\n", p_desti);
// 	return (0);
// }
