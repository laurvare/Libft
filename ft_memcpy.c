/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:49 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 15:47:57 by laurvare         ###   ########.fr       */
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
// 	char	dest[8];
// 	char	src[8];

// 	strcpy(dest, "Mara");
// 	strcpy(src, "Amelia");
// 	printf("Previous destination: %s\n", dest);
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("dest after memcpy: %s\n", src);
// 	return (0);
// }
