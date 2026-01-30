/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:19:42 by varandri          #+#    #+#             */
/*   Updated: 2026/01/29 16:06:05 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	if (!str)
		return (NULL);
	ptr = (unsigned char *)str;
	while (n)
	{
		*ptr = (unsigned char)c ;
		ptr ++;
		n --;
	}
	return (str);
}
