/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:45:33 by varandri          #+#    #+#             */
/*   Updated: 2026/01/24 01:07:57 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = i + 1;
		n = -n;
	}
	if (n == -2147483648)
		return (11);
	while (n % 10)
	{
		i ++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;	
	int		i;
	int		int_len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	int_len = ft_int_len(n);
	str = (char *)malloc ((sizeof(char) * int_len) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		*(str + 0) = '-';
	}
	i = 0;
	while (n % 10)
	{
		*(str + (int_len - 1) - i) = (n % 10) + '0';
		n = n / 10;
		i ++;
	}
	*(str + int_len) = '\0';
	return (str);
}
