/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:49 by varandri          #+#    #+#             */
/*   Updated: 2026/02/05 21:48:33 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	i = 0;
	s_len = ft_strlen(s);
	str = (char *)s;
	if ((char)c == '\0')
		return ((str + s_len));
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i ++;
	}
	return (NULL);
}
