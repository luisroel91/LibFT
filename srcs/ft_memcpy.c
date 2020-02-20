/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:35:52 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 22:18:30 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Not casting here because, well, wtf do we do if we
** get an array of ints or something else? 🤷‍♂️
*/

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dcpy;
	char	*scpy;
	size_t	i;

	i = 0;
	dcpy = dst;
	scpy = (char *)src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dst);
}
