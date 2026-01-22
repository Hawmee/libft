/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:48:58 by varandri          #+#    #+#             */
/*   Updated: 2026/01/22 15:05:19 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (*(str + i) == c)
			return ((str + i));
		i ++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char test[20] = "hello\0world";
// 	// char *test = NULL;
//     printf ("%s \n" , (char *)ft_memchr(test , '\0' ,95));
// 	printf ("%s \n" , (char *)memchr(test , '\0' , 95));
//     return (0);
// }