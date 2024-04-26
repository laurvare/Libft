/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:09:02 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/26 18:56:46 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr_return;
	int	is_negative;

	i = 0;
	nbr_return = 0;
	is_negative = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = is_negative * -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr_return = (nbr_return * 10) + str[i] - 48;
		i++;
	}
	return (nbr_return * is_negative);
}

// int main(void)
// {
// 	char str[] = "abc8";
// 	printf ("el entero es: %d\n", atoi(str));
// 	printf ("el entero falso es: %d\n", ft_atoi(str));
// 	return (0);
// }