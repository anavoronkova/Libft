/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:13 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 20:34:45 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strcounter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
	}
	return (count);
}

static void	fillarr(char **arr, size_t str_count, char const *s, char c)
{
	size_t	index;
	size_t	len_word;

	index = 0;
	while (index < str_count)
	{
		len_word = 0;
		while (*s == c && *s)
			s++;
		while (s[len_word] != c && s[len_word])
			len_word++;
		arr[index] = ft_substr(s, 0, len_word);
		s += len_word;
		index++;
	}
	arr[index] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	str_count;
	char	**arr;

	if (!s)
		return (NULL);
	str_count = strcounter(s, c);
	arr = malloc(sizeof(char *) * (str_count + 1));
	if (!arr)
		return (NULL);
	fillarr(arr, str_count, s, c);
	return (arr);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *s = "Gaze,into,the,abyss";
    char **result = ft_split(s, ',');

    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("%s\n", result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}*/
/*cc ft_split.c ft_substr.c ft_strdup.c ft_calloc.c ft_strlcpy.c 
ft_strlen.c ft_memcpy.c ft_bzero.c ft_memset.c*/