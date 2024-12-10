/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:11:59 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/04 21:32:15 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
    int test[] = { '0', 'a', -5, 'T', '=', '4', '!', 'H', ' ', 128};
    int size = sizeof(test) / sizeof(test[0]);
    int i;

	i = 0;
	while (i < size)
	{
		if (ft_isascii(test[i]))
			printf("'%c'retorna 1.\n", test[i]);
		else
			printf("'%c'retorna 0.\n", test[i]);
		i++;
	}
	return (0);

}
*/
