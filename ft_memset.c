/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:24:37 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/21 11:08:14 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fills a block of memory with a specific value, 
//converting that value to an unsigned character before
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		++ptr;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[50];

// 	strcpy(str, "Personal test");
// 	printf("Original content:\n");
// 	printf("%s\n", str);
// 	ft_memset(str, '$', 10);
// 	printf("Modified content:\n");
// 	printf("%s\n", str);
// 	return (0);
// }
