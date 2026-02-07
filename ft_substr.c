/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:41:48 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 12:30:54 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sb = ft_strdup("");
		return (sb);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sb = (char *)ft_calloc ((len + 1), sizeof(char));
	if (!sb)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sb[i] = s[start + i];
		i ++;
	}
	return (sb);
}
