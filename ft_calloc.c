/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:55:25 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 15:37:49 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

// #include <stdio.h>

// int main (void)
// {
// 	unsigned long *str;

// 	str = (unsigned long *)calloc(12, sizeof(unsigned long));

// 	int i;
// 	for (i = 0 ; i < 16 ; i ++)
// 	{
// 		printf("%lu ," , str[i]);
// 	}
// 	return 0;
// }