/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:41:15 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/23 16:47:38 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	result;
// 	int	c;

// 	c = 'y';
// 	result = ft_isalnum(c);
// 	if (ft_isalnum(c) == 1)
// 	{
// 		printf ("%d Es un valor alfanumérico", c);
// 	}
// 	else
// 	{
// 		printf ("%d No es un alfanumérico", c);
// 	}
// 	return (0);
// }
