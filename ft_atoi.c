/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:34:16 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:12:01 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0 ;
	if (!nptr)
		return (NULL);
	while (*(nptr + i) == 32 || (*(nptr + i) >= 9 && *(nptr + i) <= 13))
	{
		i ++;
	}
	if (*(nptr + i) == '-')
	{
		sign = -sign;
		i ++ ;
	}
	while (ft_isdigit(*(nptr + i)))
	{
		nbr = nbr * 10 + (*(nptr + i) - '0');
		i ++;
	}
	return (sign * nbr);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	printf("%i" , atoi("       -12a332"));	
// 	return (0);
// }