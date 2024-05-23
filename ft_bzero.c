/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:27:01 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/23 20:51:11 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*destiny;
	size_t			i;

	destiny = (unsigned char *)s;
	printf("destiny value from bzero: %s\n", destiny);
	i = 0;
	while (i < n)
	{
		printf("\n\nRONDA DE ANUMLACION BYTE\n\n");
		destiny[i] = '\0';
		printf("valor caracter anulado siguente de destiny: '%c' -> '%c'\n", destiny[i], destiny[i + 1]);
		i++;
	}
	return (destiny);
}

int	main(void)
{
	size_t	n = 5;
	char	s[] = "viva la vida";
	
	ft_bzero(s, n);
	printf("valorde s: %s\n", s);
	return (0);
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
