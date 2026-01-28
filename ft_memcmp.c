/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:50:52 by varandri          #+#    #+#             */
/*   Updated: 2026/01/28 13:33:20 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!n)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*(str1 + i) == *(str2 + i)) && i < (n - 1))
		i ++;
	return (*(str1 + i) - *(str2 + i));
}

// #include <stdio.h>
// #include <string.h>
// #include <strings.h>

// int main()
// {

// 	char a[8]="atmos\0\0";
// 	char b[8]="atmos\0\0";
// 	printf("%i \n" , ft_memcmp(a, b , 9));
// 	printf("%i" , memcmp(a, b , 9));
// 	return 0;
// }