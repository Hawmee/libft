/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:20:07 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 14:11:53 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
	{
		i ++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char c[120] = "hello";
	printf("strlen = %i" , ft_strlen(c));
	return (0);
}*/
