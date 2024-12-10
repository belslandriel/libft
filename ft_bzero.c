/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:40:41 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/15 07:30:57 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
//lena un bloque de memoria a 0
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
/*
int	main()
{
	#include <stdio.h>
	#include <string.h>

	char	str[] = "Hola mundo";
	int	len = strlen(str);
	int	i = 0;

	printf("Antes de ft_bzero: %s\n", str);
	
	ft_bzero(str, 5);

	printf("Despues de ft_bzero: ");
	while (i < len)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\n");

	printf("Valores hexadecimales: "); //comprobar que se han puesto ceros.
	i = 0;
	while (i < len)
	{
		printf("%02X ", (unsigned char)str[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
