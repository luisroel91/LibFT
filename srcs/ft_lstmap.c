/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:45:21 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:34:34 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We have two list pointers, one for the head
** and another that we use as a temp var
** If the input lst is null, we return null
** Otherwise, we make set our start pointer
** to a new list by feeding our ft_lstnew func
** with lst's content and content_size
** We then set the pointer temp to that new list
** We keep checking if there is another item in
** the list. If there is, we set temp->next to
** the result of calling f with lst's content and
** content size, then set our temp pointer to the
** next item in the list. When we're done we
** return the pointer to the head of the list
*/

#include "../includes/ft_libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*temp;

	if (!lst)
	{
		return (NULL);
	}
	else
	{
		start = f(ft_lstnew(lst->content, lst->content_size));
		temp = start;
		while ((lst = lst->next))
		{
			temp->next = f(ft_lstnew(lst->content, lst->content_size));
			temp = temp->next;
		}
		return (start);
	}
}
