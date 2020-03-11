/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:23:00 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/26 21:17:43 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** According to man, this copies bytes from string
** (assuming its char string?) src to string dst
** if the char c (as converted to a u char)
** occurs in the string src, copy starts and
** pointer to the byte after the copy of c
** in the string dst is returned. Otherwise
** n bytes are copied and a null pointer is
** returned
*/

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dcpy;
	unsigned char	*scpy;
	size_t			i;

	i = 0;
	dcpy = (unsigned char *)dst;
	scpy = (unsigned char *)src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		if (dcpy[i] == (unsigned char)c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
