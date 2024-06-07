/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:36:22 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/26 16:34:48 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub1;
	size_t	final_len;
	size_t	i;
	size_t	orig;
	size_t	aux;

	i = 0;
	orig = ft_strlen(s);
	if (start > orig)
		return (ft_calloc (1, 1));
	aux = ft_strlen(s + start);
	final_len = len;
	if (aux < len)
		final_len = aux;
	sub1 = ft_calloc (final_len + 1, 1);
	if (sub1 == NULL)
		return (NULL);
	while (i < final_len)
	{
		sub1[i] = s[start];
		i++;
		start++;
	}
	return (sub1);
}

// int	main(void)
// {
// 		char *str;
// 		char *sub1;

// 		str = "La casa azul";
// 		printf ("La string origen es: %s\n", str);
// 		sub1 = ft_substr(str, 25, 20);
// 		printf ("la substring es: %s\n", sub1);
// 		free (sub1);
// 		return(0);
// }
