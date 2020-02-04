/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:35:52 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/04 11:48:54 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Not casting here because, well, wtf do we do if we
** get an array of ints? 🤷‍♂️
*/

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dcpy;
	char	*scpy;
	int		i;

	i = 0;
	dcpy = dst;
	scpy = src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dst);
}
