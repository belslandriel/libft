/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:13:54 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:31:55 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test[] = {'1', 'd', 'J', '*', ' ', '.', '='};
	int		i;
	int		size;

	size = sizeof(test) / sizeof(test[0]);
	i = 0;
	while (i < size)
	{
		if (ft_isalpha(test[i]))
			printf("'%c'is an alphabetic character.\n", test[i]);
		else
			printf("'%c' is not an alphabetic character.\n", test[i]);
		i++;
	}
	return (0);
}
*/
