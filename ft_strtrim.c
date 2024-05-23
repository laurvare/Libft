/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:19:31 by laurvare          #+#    #+#             */
/*   Updated: 2024/05/23 23:02:33 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int findchar (char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;

    i = 0;
    while (findchar(set, s1[i]))
    {
    printf("Caracter:%c\ni:%d--\nfindchar:%d\n--------------\n",s1[i], i, findchar(set, s1[i]));
        i++;
    }
    printf("Caracter:%c\ni:%d--\nfindchar:%d\n--------------\n",s1[i], i, findchar(set, s1[i]));

    int j;

    j = strlen(s1);
    while (findchar(set, s1[j-1]))
        {
            printf("Caracter:%c\nj:%d--\nfindchar:%d\n--------------\n",s1[j], j, findchar(set, s1[j]));
            j--;
        }
    printf("Caracter:%c\nj:%d--\nfindchar:%d\n--------------\n",s1[j], j, findchar(set, s1[j]));

    return NULL;
    
}
int main (void)
{
    char str1 [] = "aaabbbIdfIbbbaaa";
    char str2 [] = "aeb";

ft_strtrim (str1, str2);
  //  printf ("%s\n", ft_strtrim (str1, str2));
    return (0);
}