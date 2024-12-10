/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:03:09 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:35:56 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int main()
{
    char str1[50] = "Hola mundo";
    char str2[50] = "Chao mundo";

    printf("Antes ft_memset: %s\n", str1);
    ft_memset(str1, '*', 5);
    printf("Después ft_memset: %s\n", str1);

    printf("Antes ft_memset: %s\n", str2);
    memset(str2, '*', 3);
    printf("Después ft_memset: %s\n", str2);

    return 0;
}
*/
