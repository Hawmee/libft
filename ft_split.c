/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:20:36 by varandri          #+#    #+#             */
/*   Updated: 2026/01/22 17:02:56 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim(char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	word = 0;
	while (*(s + i))
	{
		j = 0;
		while (ft_isalnum(*((s) + i + j)))
			j ++;
		if (j)
		{
			word ++;
			i = i + j;
		}
		i ++;
	}
	return (word);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**res;
// 	size_t	i;
	
// 	return (res);
// }

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char t[100] = "                  hello,fcgfcgfcfg           world              huhu          ";
	char **test;
	
	test = split(t , ' ');
	int i ;
	for (i = 0; *(test + i); i++)
	{
		printf("%s", *(test + i));
	}
	return (0);
}
