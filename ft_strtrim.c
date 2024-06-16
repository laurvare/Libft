/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:19:31 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 16:11:26 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Removes whitespace at the beginning and end of a string
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	str = ft_substr (s1, start, (end - start));
	return (str);
}

// int	main(void)
// {
// 	char	str1 [] = "aaaaaeeeeiiiioooouuu";
// 	char	str2 [] = "aeu";
// 	char	*result = ft_strtrim (str1, str2);
// 	printf ("%s\n", result);
// 	free(result);
// 	result = NULL;
// 	return (0);
// }
