/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:20:36 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 22:53:35 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_word(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j ++;
		if (!j)
			i ++;
		else
			return (j);
	}
	return (0);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j ++;
		if (!j)
			i ++;
		else
		{
			count ++;
			i = i + j;
		}
	}
	return (count);
}

static void	ft_free(char **splited)
{
	size_t	i;

	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i ++;
	}
	free(splited);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc ((ft_word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_word_count(s, c))
	{
		while (s[j] && s[j] == c)
			j ++;
		res[i] = ft_substr(s, j, ft_len_word(&s[j], c));
		if (!res[i])
		{
			ft_free(res);
			return (NULL);
		}
		j = j + ft_len_word(&s[j], c);
		i ++;
	}
	return (res);
}
