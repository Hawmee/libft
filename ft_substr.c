/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:41:48 by varandri          #+#    #+#             */
/*   Updated: 2026/01/21 17:16:58 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;

	sb = (char *)malloc (sizeof(char) * len);
	if (!sb || !s)
		return (NULL);
	i = 0;
	while (len -- && *(s + (int)start + (int)i))
	{
		*(sb + i) = *((char *)(s + (int)start + (int)i));
		i ++;
	}
	*(sb + i) = '\0';
	return (sb);
}

#include <stdio.h>

int	main(void)
{
	char t[5]="hell";

	char *sb;
	sb = ft_substr(t , 1 , 10);
	printf("'%s' \n" , sb);
	return (0);
}