/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:05:22 by varandri          #+#    #+#             */
/*   Updated: 2026/01/26 18:27:25 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	size = 0;
	while (tmp)
	{
		lst = lst->next;
		size ++;
	}
	return (size);
}
