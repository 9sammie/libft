/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:52:57 by maballet          #+#    #+#             */
/*   Updated: 2024/11/25 17:28:21 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	temp = lst;
	if (!temp || !lst)
		return (NULL);
	while (lst)
	{
		ft_lstnew(new_lst);
		new_lst = f(temp);
		if (!new_lst)
		{
			del(new_lst->content);
			ft_lstclear_bonus(lst, del(new_lst));
		}
		ft_lstadd_back_bonus(lst, new_lst);
	}
}