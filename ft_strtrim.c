/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:59:48 by varandri          #+#    #+#             */
/*   Updated: 2026/01/22 12:20:46 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1 && set && *(set + i))
	{
		if (*(set + i) == *(s1))
		{
			ft_memmove((char *)s1, (s1 + 1), ft_strlen(s1 + 1));
			*((char *)(s1 + (int)ft_strlen(s1) - 1)) = '\0';
		}
		if (*(set + i) == *(s1 + (int)ft_strlen(s1) - 1))
			*((char *)(s1 + (int)ft_strlen(s1) - 1)) = '\0';
		i ++;
	}
	res = (char *)malloc ((int)ft_strlen(s1) * (int) sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, (char *)s1, ft_strlen(s1));
	*(res + ft_strlen(res)) = '\0';
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c[10] = "hellllo";
// 	// char *c = NULL;
// 	printf("'%s' \n" , c);
// 	printf("'%s'" , ft_strtrim(c , "hfo"));
// 	return (0);
// }