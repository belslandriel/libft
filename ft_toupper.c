/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:32:16 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/07 19:11:08 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main()
{
	char	test[] = {'a', 'Z', '2', '#', 'H', '\0'};
	int	i = 0;

	while (test[i] != '\0')
	{
		printf("Original: %c, ft_toupper: %c, toupper: %c\n",test[i],
				ft_toupper(test[i]),
				toupper(test[i]));
		i++;
	}
	return (0);	
}
*/
