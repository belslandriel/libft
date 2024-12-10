/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:37:05 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/07 19:24:15 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int     main()
{
        char    test[] = {'a', 'Z', '2', '#', 'H', '\0'};
        int     i = 0;

        while (test[i] != '\0')
        {
                printf("Original: %c, ft_tolower: %c, tolower: %c\n",test[i],
                                ft_tolower(test[i]),
                                tolower(test[i]));
                i++;
        }
        return (0);     
}
*/
