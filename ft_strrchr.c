/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:25 by varandri          #+#    #+#             */
/*   Updated: 2026/02/08 00:08:15 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)c == str[i])
			return ((char *)(str + i));
		i --;
	}
	return (NULL);
}
