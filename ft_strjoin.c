/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:04:56 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 16:40:20 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenate two strings and return a new string
//That memory space will be reserved with malloc.
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*strconcat;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	strconcat = malloc (total_len + 1);
	if (strconcat == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strconcat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		strconcat[i] = s2[j];
		i++;
		j++;
	}
	strconcat[i] = '\0';
	return (strconcat);
}

// int	main(void)
// {
// 	char	str1[] = "Pienso como";
// 	char	str2[] = " una rana";
// 	char	*result;
// 	result = ft_strjoin(str1, str2);
// 	if (result != NULL)
// 		printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
