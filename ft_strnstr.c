/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:53:20 by varandri          #+#    #+#             */
/*   Updated: 2026/01/23 09:32:40 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*(little))
		return ((char *)big);
	i = 0;
	while (*(big + i) && i < len)
	{
		j = 0;
		while (*(big + i + j) == *(little + j))
			j ++;
		if (!*(little + j))
		{
			return ((char *)(big + i));
		}
		i ++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <strings.h>
// #include <stdlib.h>

// int main()
// {
//   char a[21]="hello world";
//   char b[8]="el";
//   printf("'%s' \n" ,strnstr(a, b , 5 ));
//   return 0;
// }
