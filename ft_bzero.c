/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:10:47 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 14:49:15 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(str + i) = '\0';
		i ++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char c[12]= "hello_mf" ;
    ft_bzero(&c[2] , 1);
    printf("%s",c);
	return (0);
}*/
