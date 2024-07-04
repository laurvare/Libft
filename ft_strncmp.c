/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:43:06 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 20:21:37 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares up to the first n characters of two strings, returning an integer 
//Indicating equal, less than or greater, without being sensitive to location
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "azuqueca de h";
// 	char	str2[] = "azuquecA de holaa";
// 	int		diferen;

// 	//diferen = strncmp(str1, str2, 21);
// 	diferen = ft_strncmp(str1, str2, 8);
// 	printf("%d\n", diferen);
// 	if (diferen == 0)
// 		printf("son iguales");
// 	else if (diferen < 0)
// 		printf("El valor ASCII cadena 1 es menor");
// 	else
// 		printf("El valor ASCII cadena 1 es mayor");
// 	return (0);
// }
