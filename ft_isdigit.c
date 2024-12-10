/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:16:19 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:33:21 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test[] = { '1', ' ', '.', '4', 'z', '!', '/'};

	int		i;
	int		size;

	i = 0;
	size = sizeof(test) / sizeof(test[0]);

	while (i < size)
	{
		if (ft_isdigit(test[i]))
			printf("'%c' es un caracter.\n", test[i]);
		else
			printf("'%c' no es un caracter.\n", test[i]);
		i++;
	}
	return (0);
}
*/
