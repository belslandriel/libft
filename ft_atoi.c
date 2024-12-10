/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:45:47 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/15 07:17:21 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*
int main()
{
	#include <stdio.h>
 
   const char *tests[] = {
        "123", "-456", "-986", "  42", "0", 
        "2147483647", "-2147483648", NULL
    };
    int i = 0;

    while (tests[i])
    {
        printf("Entrada: %-12s | ft_atoi: %-11d | ft_atoi: %d\n", 
               tests[i], ft_atoi(tests[i]), ft_atoi(tests[i]));
        i++;
    }

    return 0;
}*/
