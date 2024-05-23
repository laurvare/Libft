/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:38:26 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/23 20:28:16 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	a;

// 	a = 100;
// 	if (ft_isprint(a))
// 		printf ("%d It is a printable ASCII character, a);
// 	else
// 		printf ("%d It is not a printable ASCII character", a);
// 	return (0);
// }
