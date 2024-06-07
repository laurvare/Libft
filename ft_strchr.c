/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laura <laura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:01:30 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/07 16:59:55 by laura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Search for a letter in a string and return the pointer*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

// int	main(void)
// {
// 	char *s = "Laura";
// 	int c = 0;

// 	char	*str = ft_strchr(s, c);
// 	printf("string : \n %s\n", s);
// 	printf("searched letter: \n %c\n", c);
// 	printf("post search: \n %s\n", str);
// 	char	*origin = strchr (s, c);
// 	printf("string : \n %s\n", s);
// 	printf("searched letter: \n %c\n", c);
// 	printf("post search: \n %s\n", str);
// 	return (0);
// }
