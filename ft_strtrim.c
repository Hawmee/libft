/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:59:48 by varandri          #+#    #+#             */
/*   Updated: 2026/01/27 03:32:07 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	remove_front(char *s1)
{
	ft_memmove(s1, (s1 + 1), ft_strlen(s1 + 1));
	*(s1 + (int)ft_strlen(s1) - 1) = '\0';
}

static void	remove_back(char *s2)
{
	*(s2 + (int)ft_strlen(s2) - 1) = '\0';
}

static int	is_set(int c, char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if ((int)*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	if (!s1)
		return (NULL);
	while (set && is_set(*(s1), (char *)set))
	{
		remove_front((char *)s1);
	}
	while (set && is_set(*(s1 + (int)ft_strlen(s1) - 1), (char *)set))
	{
		remove_back((char *)s1);
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
// 	char c[10] = "hello ";
// 	// char *c = NULL;
// 	printf("'%s' \n" , c);
// 	printf("'%s'" , ft_strtrim(c , "hl"));
// 	return (0);
// }