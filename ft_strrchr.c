/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:02:42 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/10 19:16:14 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
// int	main(void)
// {
// 	char *s = "Laura";
// 	int c = 'r';

// 	char	*str = ft_strrchr(s, c);
// 	printf("la cadena es : \n %s\n", s);
// 	printf("la letra que busco es: \n %c\n", c);
// 	printf("tras la busqueda obtengo: \n %s\n", str);
// 	char	*origin = strrchr (s, c);
// 	printf("la cadena es : \n %s\n", s);
// 	printf("la letra que busco es: \n %c\n", c);
// 	printf("tras la busqueda obtengo: \n %s\n", str);
// 	return (0);
// }