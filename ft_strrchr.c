/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:02:42 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 11:15:25 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* 
int	main(void)
{
	char *s = "Laura";
	int c = 0;

	char	*str = ft_strchr(s, c);
	printf("la cadena es : \n %s\n", s);
	printf("la letra que busco es: \n %c\n", c);
	printf("tras la busqueda obtengo: \n %s\n", str);
	char	*origin = strchr (s, c);
	printf("la cadena es : \n %s\n", s);
	printf("la letra que busco es: \n %c\n", c);
	printf("tras la busqueda obtengo: \n %s\n", str);
	return (0);
}
 */