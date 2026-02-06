/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:46:52 by varandri          #+#    #+#             */
/*   Updated: 2026/02/06 08:19:08 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 && s2)
		res = ft_strdup(s2);
	else if (s1 && !s2)
		res = ft_strdup(s1);
	else
	{
		res_len = ft_strlen(s1) + ft_strlen(s2);
		res = (char *)ft_calloc ((res_len + 1), sizeof(char));
		if (!res)
			return (NULL);
		ft_memmove(res, s1, ft_strlen(s1));
		ft_memmove((res + ft_strlen(s1)), s2, ft_strlen(s2));
	}
	if (!res)
		return (NULL);
	return (res);
}
