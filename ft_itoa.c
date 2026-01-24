/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:45:33 by varandri          #+#    #+#             */
/*   Updated: 2026/01/24 08:56:22 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = i + 1;
		n = -n;
	}
	while (n)
	{
		i ++;
		n = n / 10;
	}
	return (i);
}

static void	ft_convert(int n, char *str, int int_len)
{
	int	i;

	i = 0;
	while (n)
	{
		*(str + (int_len - 1) - i) = (n % 10) + '0';
		n = n / 10;
		i ++;
	}
	*(str + int_len) = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;	
	int		int_len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	int_len = ft_int_len(n);
	str = (char *)malloc (sizeof(char) * (int_len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		*(str + 0) = '-';
	}
	ft_convert(n, str, int_len);
	return (str);
}
