/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:10:47 by varandri          #+#    #+#             */
/*   Updated: 2026/01/22 09:35:33 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((unsigned char *)s , 0 , n);
}

// #include <stdio.h>
// #include <strings.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char c[12]= "aaaaaaaa" ;
	
//     bzero(&c[2] , 1);
//     int i;
// 	for(i = 0 ; i < (int)ft_strlen(c)*(int)sizeof(int) ; i ++)
// 	{
// 		printf("%i" , c[i]);
// 	}
// 	return (0);
// }
