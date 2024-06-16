/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:06 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 18:16:14 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Find 1 time a specific byte appears in a block of memory, return pointer
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;

	s1 = (char *)s;
	while (n > 0)
	{
		if ((unsigned char)*s1 == (unsigned char)c)
			return (s1);
		s1++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[7] = "hola";
// 	int		c;
// 	printf("%s\n", memchr("hola", 0, 5));
// 	printf("%s\n", ft_memchr("hola", 0, 5));
// 	return (0);
// }
