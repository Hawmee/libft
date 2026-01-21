/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:48:58 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 16:43:39 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n <= ft_strlen(s))
		ft_bzero((char *)(s + (int)n), 1);
	return (ft_strchr((char *)s, c));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char test[20] = "hello world";
//     printf ("%p \n" , ft_memchr(test , 'w' , 100));
// 	printf ("%p \n" , memchr(test , 'w' , 100));
// 	printf ("%p" , &test[6]);
//     return (0);
// }