/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:18:59 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 15:23:08 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char c;

// 	c = 54;
// 	if (ft_isdigit(c))
// 		printf("digit");
// 	else
// 		printf("non digit");
// 	return (0);
// }
