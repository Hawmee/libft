/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:25 by varandri          #+#    #+#             */
/*   Updated: 2026/02/01 13:55:48 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	if (!s)
		return (NULL);
	i = 0;
	str = (unsigned char *)s;
	while (i <= (int)ft_strlen(s))
	{
		if ((unsigned char)c == str[(int)ft_strlen(s) - i])
			return ((char *)(str + (int)ft_strlen(s) - i));
		i++;
	}
	return (NULL);
}
