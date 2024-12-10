/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:27:43 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/10 01:46:10 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*c_src;
	unsigned char			*c_dest;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	c_src = (unsigned char *) src;
	c_dest = (unsigned char *) dest;
	while (n--)
		c_dest[n] = c_src[n];
	return (dest);
}
/*
int main(void)
{
	#include <stdio.h>
    char str[] = "yo vivia en el bosque muy contento, caminaba...";

    printf("Antes  : %s\n", str);

    // Mover 8 caracteres desde la posición 20 a la posición 15
    ft_memmove(str+15, str+20, 11);
    printf("Después: %s\n", str);

    // Probar con punteros NULL
    if (ft_memmove(NULL, NULL, 5) == NULL)
        printf("Manejo correcto de NULL\n");
    else
        printf("Error en manejo de NULL\n");

    return 0;
}
*/
