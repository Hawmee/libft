/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:49 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 22:58:06 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str ++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (NULL);
}
