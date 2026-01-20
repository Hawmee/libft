/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:18:52 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 08:18:53 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main (void)
{
	if (ft_isascii('ç'))
		printf("ascii");
	else
		printf("non ascii");
	return (0);
}*/
