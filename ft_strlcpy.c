/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:20:02 by varandri          #+#    #+#             */
/*   Updated: 2026/02/06 07:41:09 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	i = 0;
	while (i < (size - 1))
	{
		if (!src[i])
			break ;
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (src_len);
}
