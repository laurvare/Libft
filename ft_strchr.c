/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:01:30 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/10 15:02:13 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

int	main(void)
{
	char *s = "azuqueca";
	int c = 'z';

	char	*str = ft_strchr(s, c);
	printf("la cadena es : \n %s\n", s);
	printf("la letra que busco es: \n %c\n", c);
	printf("tras la busqueda obtengo: \n %s\n", str);
	char	*of = strchr (s,c);
	printf("la cadena es : \n %s\n", s);
	printf("la letra que busco es: \n %c\n", c);
	printf("tras la busqueda obtengo: \n %s\n", str);
	return (0);

}
