/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:49 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 14:52:44 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c == '\0')
		return (str + (ft_strlen(s)));
	while (*(str + i))
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
//     char test[5] = "test";
//     printf("%p \n" , ft_strchr(test , 't'));
//     printf("%p" , &test[0]);
//     return (0);
// }
