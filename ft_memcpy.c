/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:49 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:37:28 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copy a block of memory from one place to another.No overlap.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*p_dest;
	const unsigned char		*p_src;
	size_t					i;

	if (!dest && !src)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[8] = "Mara";
// 	char	src[8] = "Amelia";
// 	printf("SRC: %s | DEST: %s\n",src, dest);
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("after execute memcpy then,\n");
// 	printf("SRC: %s | DEST: %s\n",src, dest);
// 	return (0);
// }
