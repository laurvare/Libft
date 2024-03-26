/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:49 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/26 15:34:29 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	char		*p_src;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[8];
	char	src[8];

	strcpy(dest, "Mara");
	strcpy(src, "Amelia");
	printf("dest antes de memcpy: %s\n", dest);
	ft_memcpy(dest, src, sizeof(src));
	printf("dest después de memcpy: %s\n", src);
	return (0);
}
