/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:19:45 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 20:16:02 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies a custom function to each character in a string modify original string
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index])
	{
		f(index, &s[index]);
		index ++;
	}
	return ;
}

// void ft_print_char(unsigned int i, char *c)
// {
//  	printf("[%d]: %c\n",i, *c);
//  	printf("[%d]: %c\n",i, *c - 32);
//  	printf("[%d]: %c\n",i, *c + 1);
//  	printf("[%d]: %c\n",i, *c + 3);

// }
// int	main(void)
// {
// 	char *str = "mallorca";
// 	ft_striteri(str, ft_print_char);
// 	return(0);
// }