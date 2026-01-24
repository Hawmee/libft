/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:20:36 by varandri          #+#    #+#             */
/*   Updated: 2026/01/24 12:45:58 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

static int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] != c && s[i + j])
			j ++;
		if (j)
		{
			count ++;
			i = i + j;
		}
		i ++;
	}
	return (count);
}

static int	ft_len_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(s + i + j) != c && *(s + i + j))
			j ++;
		if (j)
			return (j);
		i ++;
	}
	return (j);
}

static char	**ft_free(char **splited)
{
	size_t	i;

	i = 0;
	while (*(splited + i))
	{
		free(*(splited + i));
		i ++;
	}
	free(splited);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc ((ft_count_word(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			res[j] = ft_substr(s, i, (size_t)ft_len_word(s + i, c));
			if (!*(res + j))
				return (ft_free(res));
			j++;
			i = i + (size_t)ft_len_word(s + i, c);
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
