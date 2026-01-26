/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:20:02 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:40:27 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	if (!dst || !src)
		return (NULL);
	src_len = ft_strlen(src);
	i = 0;
	while (i < (size - 1))
	{
		if (!*(src + i))
			break ;
		*(dst + i) = *(src + i);
		i ++;
	}
	*(dst + i) = '\0';
	return (src_len);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
//   char dest[4]="ggg"; 
//   char test[]="test";
//   printf("%zu \n" ,ft_strlcpy(dest , test , 4));
//   printf("%zu \n" , ft_strlen(dest));
//   printf("%s", dest); 
// return 0; 
// }
