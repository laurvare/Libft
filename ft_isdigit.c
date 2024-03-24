/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:52:41 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/22 17:36:43 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
// int	main(void)
// {
// 	int	c;

// 	c = 45;
// 	if (ft_isdigit(c))
// 	{
// 		printf ("%d Lo reconozco un dígito decimal", c);
// 	}
// 	else
// 	{
// 		printf ("%d No lo reconozco como dígito", c);
// 	}
// 	return (0);
// }
