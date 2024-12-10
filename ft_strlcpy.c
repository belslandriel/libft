/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:49:15 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/07 19:45:24 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy (dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}
/*
int	main()
{
	char destino[20];
	const char *origen = "hola mundo";
	size_t tamano = sizeof(destino);
	size_t resultado;

	resultado = ft_strlcpy(destino, origen, tamano);
	printf("Cadena copiada: %s\n", destino);
	printf("Longitud de la cadena original: %zu\n", resultado);

	return (0);
}
*/
