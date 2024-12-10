/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:21:52 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:31:32 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	char	num;
	char	alphabetic;

	num = (c >= '0' && c <= '9');
	alphabetic = ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
	if (num || alphabetic)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test[] = { '1', ' ', '.', '4', 'z', '!', '/', 'H', '8'};
	int 	i;
	int	size;

	i = 0;
	size = sizeof(test) / sizeof(test[0]);
	while (i < size)
	{
		if (ft_isalnum(test[i]))
			printf("'%c' es un caracter alfanumerico.\n", test[i]);
		else
			printf("'%c' no es un caracter alfanumerico.\n", test[i]);
		i++;
	}
	return (0);
}
*/
