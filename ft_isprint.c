/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:47:35 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:33:52 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
    char test[] = {31, 32, 'A', '~', 127, 0};  // 0 como terminador
    int i = 0;

    while (test[i] != 0)
    {
        printf("'%c' (%d): %s\n", 
               test[i], test[i], 
               isprint(test[i]) ? "printable" : "not printable");
        i++;
    }

    return 0;
}
*/
