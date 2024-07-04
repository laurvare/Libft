/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:28:00 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 21:00:05 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Defines a function that applies a function to each character in a string
//Creating a new string with the results.
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
// 	int	new_char;

// 	printf ("[%d] = %c \n", index, c);
// 	new_char = c - 32;
// 	printf ("[%d] = %c \n", index, new_char);
// 	return (new_char);
// }

// int	main(void)
// {
// 	char	*str1 = "ibiza";
// 	char	*s2 = ft_strmapi (str1, ft_upper_char);

// 	printf("BEFORE: %s | AFTER: %s", str1, s2);
// 	free(s2);
// 	return (0);
// }
