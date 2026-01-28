/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:36:23 by varandri          #+#    #+#             */
/*   Updated: 2026/01/28 07:08:09 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*actual;

	temp = *lst;
	actual = temp;
	if (!del)
		return ;
	while (temp)
	{
		actual = temp;
		del(temp->content);
		temp = temp->next;
		free(actual);
	}
}
