/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:45:57 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 21:57:55 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//searches for the first occurrence of a substring within a string
//limiting the search to a maximum number of characters
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while ((*haystack != '\0') && (needle_len <= len))
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*		
	while ((haystack[i]) != '\0' && i < len)
	{
		while ((haystack[i + j] != '\0') && (needle[j] != '\0'))
		{
			if ((haystack[i + j] == needle[j]) && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&(haystack[i]));
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}*/
// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "Casa de laura varela";
// 	char	*str2 = "varela";

// 	printf("%s\n", ft_strnstr(str1, str2, 20));
// 	//printf("%s\n", strnstr(str1, str2, 12));
// 	return (0);
// }