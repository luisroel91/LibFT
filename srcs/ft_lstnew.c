/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:30:09 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/18 09:31:37 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Make a new var of type *t_list
** Malloc is and typecast it to *t_list
** If we fail to malloc, return null
** If content is null set new_list->content to null
** set content_size to zero (as is instructed
** in subject), otherwise malloc new_list-> content
** to "content_size" bytes. If that fails, scrap the
** list entirely via free() and then return NULL
** Otherwise use memcpy to copy the content to the
** list and then set new_list->content_size to
** content_size. After all that, set new_list->next to null
** Return the list
*/

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(*new_list));
	if (new_list == NULL)
	{
		return (NULL);
	}
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		new_list->content = malloc(content_size);
		if (!new_list->content)
		{
			free(new_list);
			return (NULL);
		}
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	new_list->next = NULL;
	return (new_list);
}
