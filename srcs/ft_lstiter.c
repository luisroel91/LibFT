/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:34:51 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 16:54:22 by luiroel          ###   ########.fr       */
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
	if (!lst)
	{
		return ;
	}
	if (lst->next)
	{
		ft_lstiter(lst->next, f);
	}
	f(lst);
}
