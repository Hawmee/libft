/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:21:22 by varandri          #+#    #+#             */
/*   Updated: 2026/01/20 15:24:00 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)) && n--)
	{
		i ++;
	}
	return (*(s1 + i) - *(s2 + i));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char test[20] = "";
//     char test2[20] = "a";

//     printf ("%i" , strncmp(test , test2 , 200));
//     return (0);
// }