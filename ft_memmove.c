/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:28 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 15:37:39 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dest == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n)
		{
			*(d + (n - 1)) = *(s + (n - 1));
			n --;
		}
	}
	return (dest);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
// 	char csrc[100] = "Geeksfor"; 
// 	ft_memmove(csrc+5, csrc, 3); 
// 	printf("ft_memmove: ");
// 	printf("%s", csrc); 
// 	char csrc2[100] = "Geeksfor"; 
// 	memmove(csrc2+5, csrc2, 3); 
// 	printf("\nmemmove: ");
// 	printf("%s", csrc2); 
// 	return 0; 
// }
