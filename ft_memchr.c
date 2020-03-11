/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:43:05 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/26 21:17:43 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char			*scpy;
	char			conv;
	size_t			i;

	scpy = (char *)s;
	conv = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (scpy[i] == conv)
		{
			return ((void *)&scpy[i]);
		}
		i++;
	}
	return (NULL);
}
