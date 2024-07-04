/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:05:13 by laurvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:30:10 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Splits a string into substrings based on a delimiter 
//Returns pointers to the resulting substrings
#include "libft.h"

static size_t	ft_len_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static void	ft_free(char **dst)
{
	size_t	n_word;

	n_word = 0;
	while (dst[n_word] != NULL)
	{
		free(dst[n_word]);
		n_word++;
	}
	free (dst);
}

static char	**ft_save_word(char **dst, const char *s, char c)
{
	size_t	start;
	size_t	size_s;
	size_t	l_word;
	size_t	n_word;

	n_word = 0;
	start = 0;
	size_s = (size_t)ft_strlen(s);
	while (start < size_s && s[start])
	{
		l_word = ft_len_word(s + start, c);
		if (l_word > 0)
		{
			dst[n_word] = ft_substr(s, start, l_word);
			if (dst[n_word] == NULL)
			{
				ft_free(dst);
				return (NULL);
			}
			n_word++;
		}
		start = start + l_word + 1;
	}
	dst[n_word] = NULL;
	return (dst);
}

static int	ft_count_word(const char *s, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;

	dst = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	dst = ft_save_word(dst, s, c);
	if (dst == NULL)
		return (NULL);
	return (dst);
}

// int main()
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	char frase[] = "       patatas huevos leche caca casa     cosa miel ";
// 	i = ft_count_word(frase, ' ');
// 	printf("valor de i: %d\n", i);
//     char **train = ft_split(frase, ' ');
// 	while (j < i)
// 	{
// 		printf("Vagón %d: %s\n", j, train[j]);
// 		j++;
// 	}
// 	j = 0;
// 	while (*(train + j))
// 	{
// 		printf("Vagón %d: %s\n", j, *(train + j));
// 		j++;
// 	} 
// 	j = 0;
// 	while (train[j])
// 	{
// 		printf("Vagón %d: %s\n", j, train[j]);
// 		j++;
// 	} 
// 	free (train);
//     return (0);
// }
