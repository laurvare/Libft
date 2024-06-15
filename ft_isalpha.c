/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:05 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 17:40:29 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function checks if a character is a letter
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'g';
// 	if (ft_isalpha(c))
// 		printf("The character value is: %c\n", c);
// 	else
// 		printf("The character is not alphabetical.\n");
// 	return (0);
// }
