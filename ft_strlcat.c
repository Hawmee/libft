/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:56 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:37:04 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (NULL);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while ((dst_len + i) < (size - 1) && *(src + i))
	{
		*(dst + dst_len + i) = *(src + i);
		i ++;
	}
	*(dst + dst_len + i) = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int main() {
// 	return (0);
// }
