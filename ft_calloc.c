/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:04:38 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:21:17 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserve memory: reserve enough memory for size * count
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	total = (nmemb * size);
	str = malloc(total);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
//#include <stdio.h>
//#include <stdlib.h>

// int	main(void)
// {	
// 	char	*str = calloc(2147483649, 1);
// 	printf("%p\n", str);
// 	free(str);
// 	char	*str2 = ft_calloc(5, 1);
// 	printf("%s\n", str2);
// 	free(str2);
// 	return (0);
// }
