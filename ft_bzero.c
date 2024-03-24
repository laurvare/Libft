/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:27:01 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/24 17:42:18 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*destiny;
	size_t			i;

	destiny = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		destiny[i] = 0;
		i++;
	}
	return (destiny);
}

// int	main(void)
// {
// 	char	str[50];

// 	strcpy(str, "comprobando");
// 	printf("Contenido antes de la función:\n");
// 	printf("%s\n", str);
// 	ft_bzero(str, 50);
// 	printf("Contenido tras la función:\n");
// 	printf("%s\n", str);
// 	return (0);
// }