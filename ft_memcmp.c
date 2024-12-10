/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:23:18 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/08 20:26:29 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
    char	str1[] = "Hello";
    char	str2[] = "Hello";
    char	str3[] = "World";

    printf("Comparing 'Hello' with 'Hello': %d\n", ft_memcmp(str1, str2, 5));
    printf("Comparing 'Hello' with 'World': %d\n", ft_memcmp(str1, str3, 5));
    printf("Comparing 'Hello' with 'Hello': %d\n", ft_memcmp(str1, str2, 3));
    printf("Comparing 'Hello' with 'World': %d\n", ft_memcmp(str1, str3, 3));

    // Comparar con la función original de la biblioteca estándar
    printf("\nUsing standard memcmp:\n");
    printf("Comparing 'Hello' with 'Hello': %d\n", memcmp(str1, str2, 5));
    printf("Comparing 'Hello' with 'World': %d\n", memcmp(str1, str3, 5));

    return (0);
}
*/
