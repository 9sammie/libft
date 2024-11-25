/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:34:51 by maballet          #+#    #+#             */
/*   Updated: 2024/11/25 11:05:40 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*getnext;

	temp = *lst;
	while (temp)
	{
		getnext = temp->next;
		del(temp->content);
		free(temp);
		temp = getnext;
	}
	*lst = NULL;
}
