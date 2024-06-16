/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:09:16 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/12 21:49:43 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Duplicates a string
//Dynamically allocating memory for the new string and returning a pointer to it
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*oil;
	size_t	t;
	size_t	i;

	i = 0;
	t = ft_strlen(s);
	oil = malloc(t + 1);
	if (oil == NULL)
		return (NULL);
	while (i < t + 1)
	{
		oil[i] = s[i];
		i++;
	}
	return (oil);
}

// int main(void)
// {
//	 char *str;
//	 str = "mago";
//	 char *m;

//	 printf ("str Original: %s\n", str);
//	 m = ft_strdup(str);
//	 printf ("str Duplicada: %s\n", m);
//	 free(m);
//	 return(0);
// }
