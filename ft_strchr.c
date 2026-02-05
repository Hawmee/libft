/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:49 by varandri          #+#    #+#             */
/*   Updated: 2026/02/06 00:05:03 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			s_len;
	unsigned char	*str;

	i = 0;
	s_len = ft_strlen(s);
	str = (unsigned char *)s;
	if ((unsigned char)c == '\0')
		return ((char *)(str + s_len));
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i ++;
	}
	return (NULL);
}
