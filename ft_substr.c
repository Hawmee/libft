/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:41:48 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:48:37 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;

	if (!s)
		return (NULL);
	sb = (char *)malloc (sizeof(char) * (len + 1));
	if (!sb)
		return (NULL);
	i = 0;
	while (i < len && s[(int)start + (int)i])
	{
		*(sb + i) = (char)(*((char *)(s + (int)start + (int)i)));
		i ++;
	}
	sb[i] = '\0';
	return (sb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char t[30]="hello world mf";

// 	char *sb;
// 	sb = ft_substr(t , 6 , 5);
// 	printf("'%s' \n" , sb);
// 	return (0);
// }