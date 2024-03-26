/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:32:23 by laurvare          #+#    #+#             */
/*   Updated: 2024/03/26 17:03:22 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy(char *p_dest, char *p_orig, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dest;
	char	*p_orig;

	if (dst == NULL && src == NULL)
		return (NULL);
	p_dest = (char *)dst;
	p_orig = (char *)src;
	copy(p_dest, p_orig, len);
	return (dst);
}

void	copy(char *p_dest, char *p_orig, size_t len)
{
	size_t	i;

	i = 0;
	if (p_dest > p_orig)
	{
		while (len-- > 0)
			p_dest[len] = p_orig[len];
	}
	else
	{
		while (i < len)
		{
			p_dest[i] = p_orig[i];
			i++;
		}
	}
}
int main (void)
{
	char p_orig[] = "bbbbbb";
	char p_desti[] = "aaaaaaaa";
	printf ("El destino es:%s\n",p_desti);
	ft_memmove(p_orig, p_desti, 6);
	printf ("El destino ahora es:%s\n",p_orig);
	return (0);
}