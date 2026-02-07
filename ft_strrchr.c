/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:25 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 12:33:11 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			i;
	size_t			s_len;

	str = (unsigned char *)s;
	s_len = ft_strlen(s);
	i = 0;
	if ((unsigned char)c == '\0')
		return ((char *)(str + s_len));
	while (i <= s_len)
	{
		if ((unsigned char)c == str[s_len - i])
			return ((char *)(str + s_len - i));
		i++;
	}
	return (NULL);
}
