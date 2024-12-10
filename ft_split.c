/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:17:00 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/15 12:42:45 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char sep)
//cuenta palabras considerando que termina al encuentra separador o final cadena
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != sep && (str[i + 1] == sep || !str[i + 1])))
			word++;
		i++;
	}
	return (word);
}

static char	*allocate_word(const char *str, char sep, int *i)
{
	char	*word;
	int		len;

	len = 0;
	while (str[*i] == sep)
		(*i)++;
	while (str[*i + len] && str [*i + len] != sep)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, str + *i, len + 1);
	*i += len;
	return (word);
}

static char	**free_split(char **split, int word)
{
	while (word > 0)
		free(split[--word]);
	free(split);
	return (NULL);
}

static void	*write_split(char const *s, char c, char **split, int num_words)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (word < num_words)
	{
		split[word] = allocate_word(s, c, &i);
		if (!split[word])
			return (free_split(split, word));
		word++;
	}
	split[word] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	return (write_split(s, c, res, word_count));
}
/*
int main()
{
	#include <stdio.h>
	#include <stdlib.h>

    char const *str = "Hola,mundo,esto,es,una,prueba";
    char sep = ',';
    char **result;
    int i = 0;

    result = ft_split(str, sep);
    
    if (result == NULL)
    {
        printf("Error: ft_split returned NULL\n");
        return 1;
    }

    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);  // Liberar cada string
        i++;
    }
    
    free(result);  // Liberar el array de punteros
    return 0;
}
*/
