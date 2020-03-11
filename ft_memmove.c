/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:52:19 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/26 21:17:43 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dcpy;
	char	*scpy;
	size_t	i;

	if (!dst && !src)
		return (dst);
	i = 0;
	dcpy = (char *)dst;
	scpy = (char *)src;
	if (scpy < dcpy)
	{
		while (++i <= len)
		{
			dcpy[len - i] = scpy[len - i];
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(dcpy++) = *(scpy++);
		}
	}
	return (dst);
}
