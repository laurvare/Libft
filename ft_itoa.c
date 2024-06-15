/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:45:05 by laurvare          #+#    #+#             */
/*   Updated: 2024/06/15 16:23:01 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (count + 1);
	if (n < 0)
		count = count + 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		aux_n;
	int		count;
	int		original;

	original = n;
	count = ft_counter_digits(n);
	str = malloc(count + 1);
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	count--;
	while (count >= 0)
	{
		aux_n = n % 10;
		if (aux_n < 0)
			aux_n = -aux_n;
		str[count] = aux_n + 48;
		n = n / 10;
		count--;
	}
	if (original < 0)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	int n;

// 	n = 2147483647;
// 	printf("%s\n", ft_itoa(n));
// 	return(0);
// }
