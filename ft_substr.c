/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:41:48 by varandri          #+#    #+#             */
/*   Updated: 2026/02/04 09:38:44 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		sb = ft_strdup("");
		return (sb);
	}
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	sb = (char *)ft_calloc (sizeof(char), (len + 1));
	if (!sb)
		return (NULL);
	i = 0;
	while (i < len && s[(int)start + (int)i])
	{
		*(sb + i) = (char)(s[(size_t)start + i]);
		i ++;
	}
	return (sb);
}
