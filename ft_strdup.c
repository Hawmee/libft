/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:55:18 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 13:44:53 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!dup)
		return (NULL);
	while (*(s + i))
	{
		*(dup + i) = (char)*(s + i);
		i ++;
	}
	*(dup + i) = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char s[12]= "hello_wrld";
// 	printf("%s" , strdup(s));
// 	return (0);
// }