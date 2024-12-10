/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:40:47 by miclandr          #+#    #+#             */
/*   Updated: 2024/10/05 17:25:39 by miclandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "Hola";
	printf("%zu", ft_strlen(str));
	return (0);
}
*/
