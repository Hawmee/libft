/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:18 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 11:09:21 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(d + i) = *((unsigned char *)src + i);
		i ++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {

//     // Initialize a variable
//     char a[10] = "abcde";
//     // Use memcpy to copy the value of 'a' into 'b'
//     memcpy(a + 1, a , 5 ); 

//     printf("%s \n %s" ,a + 1, a);

//     return 0;
// }

/*#include <stdio.h>
#include <string.h>
int main()
{
    char csrc[100] = "Geeksfor";
    ft_memcpy(NULL , NULL , 5);
    printf("%s", csrc);
    return 0;
}*/
