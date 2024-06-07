/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laura <laura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:28:00 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/07 16:51:40 by laura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	i = 0;
	if (f == NULL)
		return (NULL);
	s2 = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}

// static char	ft_upper_char(unsigned int index, char c)
// {
// 	int	cc;

// 	printf ("[%d] = %c \n", index, c);
// 	cc = c - 32;
// 	printf ("[%d] = %c \n", index, cc);
// 	return (cc);
// }

// int	main(void)
// {
// 	char	*str1 = "ibiza";
// 	char	*s2 = ft_strmapi (str1, ft_upper_char);

// 	printf("str1: %s   s2: %s", str1, s2);
// 	free(s2);
// 	return (0);
// }
