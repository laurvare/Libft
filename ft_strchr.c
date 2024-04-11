/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:01:30 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/10 18:59:43 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
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