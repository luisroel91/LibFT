/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:34:51 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/24 20:30:15 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** While lst is not null, apply function
** to element. Then set the current element
** to the next one in the chain. Meaning,
** lst = lst->next
*/

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *list;

	list = lst;
	if (!lst)
	{
		return ;
	}
	while (list)
	{
		f(list);
		list = list->next;
	}
}
