/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:25 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:47:33 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	while (i <= (int)ft_strlen(s))
	{
		if (c == *(str + (int)ft_strlen(s) - i))
			return (str + (int)ft_strlen(s) - i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char test[5] = "test";
//     printf("%p \n" , strrchr(test , 'e'));
//     printf("%p" , &test[1]);
//     return (0);
// }