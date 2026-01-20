/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:42 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 14:16:21 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n)
	{
		*ptr = (unsigned char)c ;
		ptr ++;
		n --;
	}
	return (str);
}

// #include <stdio.h>

// int main ()
// {
//   	int str[4] = {1,2,3,102};
//   	ft_memset (str,65 ,sizeof(int) * 3);
// 	int i;
// 	for (i = 0 ; i < 4 ; i ++)
// 	{
// 		printf("%i \n" , str[i]);
// 	}
//   return 0;
// }
