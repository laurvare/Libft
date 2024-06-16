/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:32:31 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/16 16:33:15 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculates the length of a string, excluding the terminating null character
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Amelia";
// 	printf("%lu \n", ft_strlen(str));
// 	printf("%lu \n", strlen(str));
// 	return (0);
// }
