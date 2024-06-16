/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:45:57 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 16:24:06 by laurvare         ###   ########.fr       */
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

// int	main(void)
// {
// 	char	str1[] = "vvida";
// 	char	str2[] = "vida";
// 	char	str3[] = "vvida";
// 	char	str4[] = "vida";

// 	printf("%s\n", ft_strnstr(str1, str2, 5));
// 	printf("%s\n", strnstr(str3, str4, -1));
// 	return (0);
// }