/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:32:23 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 20:00:46 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copy data between blocks of memory that may overlap
#include "libft.h"

static void	copy(char *p_dest, char *p_orig, size_t len)
{
	size_t	i;

	i = 0;
	if (p_dest > p_orig)
	{
		while (len-- > 0)
			p_dest[len] = p_orig[len];
	}
	else
	{
		while (i < len)
		{
			p_dest[i] = p_orig[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dest;
	char	*p_orig;

	if (dst == NULL && src == NULL)
		return (NULL);
	p_dest = (char *)dst;
	p_orig = (char *)src;
	copy(p_dest, p_orig, len);
	return (dst);
}

// int main() 
// {
//     char dest[] = "AAA";
//     char str[] = "BbBbBb";

//     printf("str1 pre memmove: %s\n", dest);
//     ft_memmove(dest, str, sizeof(dest));
//     printf("str1 post ft_memmove: %s\n", dest);
// 	memmove(dest, str, sizeof(dest));
// 	printf("str1 post memmove: %s\n", dest);

//     return (0);
// }
