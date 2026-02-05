/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:25 by varandri          #+#    #+#             */
/*   Updated: 2026/02/06 00:07:42 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	if ((unsigned char)c == '\0')
		return ((char *)(str + ft_strlen(s)));
	while (i <= ft_strlen(s))
	{
		if ((unsigned char)c == str[ft_strlen(s) - i])
			return ((char *)(str + ft_strlen(s) - i));
		i++;
	}
	return (NULL);
}
