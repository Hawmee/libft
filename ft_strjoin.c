/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:46:52 by varandri          #+#    #+#             */
/*   Updated: 2026/01/30 17:38:51 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_len;

	if (!s1 || !s2)
		return (NULL);
	res_len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc (sizeof(char) * (res_len + 1));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, ft_strlen(s1));
	ft_memmove((res + ft_strlen(s1)), s2, ft_strlen(s2));
	res[res_len] = '\0';
	return (res);
}
