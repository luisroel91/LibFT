/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:29:26 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 11:16:20 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*memalloc;

	memalloc = malloc(size);
	if (!memalloc)
	{
		return (NULL);
	}
	ft_bzero(memalloc, size);
	return (memalloc);
}
