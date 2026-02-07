/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:45:33 by varandri          #+#    #+#             */
/*   Updated: 2026/02/07 21:03:47 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long n)
{
	int	i;

	i = 0;
	if (!n)
		i ++;
	if (n < 0)
	{
		n = -n;
		i ++;
	}
	while (n)
	{
		i ++;
		n = n / 10;
	}
	return (i);
}

static void	ft_convert(long n, char *str, int int_len)
{
	if (!n)
		str[0] = '0';
	while (n)
	{
		str[(int_len - 1)] = (n % 10) + '0';
		n = n / 10;
		int_len --;
	}
}

char	*ft_itoa(int n)
{
	char	*str;	
	int		int_len;
	long	nbr;

	nbr = (long)n;
	int_len = ft_int_len(nbr);
	str = (char *)ft_calloc((int_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	ft_convert(nbr, str, int_len);
	return (str);
}
