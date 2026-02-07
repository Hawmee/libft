/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:53:20 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 12:22:24 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lil_len;

	if (!*little)
		return ((char *)big);
	i = 0;
	lil_len = ft_strlen(little);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j]
			&& i + j < len)
			j ++;
		if (j == lil_len)
			return ((char *)&big[i]);
		i ++;
	}
	return (NULL);
}
