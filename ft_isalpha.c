/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:05 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/22 16:42:39 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 'y';
	if (ft_isalpha(c))
	{
		printf("El valor del carácter es: %c\n", c);
	}
	else
	{
		printf("El carácter no es alfabético.\n");
	}
	return (0);
}*/
