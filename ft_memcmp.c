/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:48:05 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/24 15:21:26 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sn1;
	unsigned char	*sn2;

	i = 0;
	sn1 = (unsigned char *) s1;
	sn2 = (unsigned char *) s2;
	while (i < n)
	{
		if ((unsigned char)sn1[i] - (unsigned char)sn2[i] != 0)
			return ((unsigned char)sn1[i] - (unsigned char)sn2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	unsigned char	s1[] = "Hola Mundo";
// 	unsigned char	s2[] = "Hola Mundo";
// 	unsigned char	s3[] = "Hola Mundo";
// 	unsigned char	s4[] = "Hola Mundo";
// 	int 			diferen;

// 	diferen = memcmp (s1, s2, 10);
// 	printf ("%d\n", diferen);
// 	diferen = ft_memcmp (s3, s4, 10);
// 	printf ("%d\n", diferen);
// 	return (0);
// }
