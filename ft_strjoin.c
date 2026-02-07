/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:46:52 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 23:12:36 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*res;
// 	size_t	res_len;

// 	if (!s1 && !s2)
// 		return (NULL);
// 	else if (!s1 && s2)
// 		res = ft_strdup(s2);
// 	else if (s1 && !s2)
// 		res = ft_strdup(s1);
// 	else
// 	{
// 		res_len = ft_strlen(s1) + ft_strlen(s2);
// 		res = (char *)ft_calloc ((res_len + 1), sizeof(char));
// 		if (!res)
// 			return (NULL);
// 		ft_memmove(res, s1, ft_strlen(s1));
// 		ft_memmove((res + ft_strlen(s1)), s2, ft_strlen(s2));
// 	}
// 	if (!res)
// 		return (NULL);
// 	return (res);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;	

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *)ft_calloc ((s1_len + s2_len + 1), sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, s1_len);
	ft_memmove((res + s1_len), s2, s2_len);
	return (res);
}
