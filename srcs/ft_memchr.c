/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:43:05 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:34:56 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*scpy;
	char	conv;
	int		i;

	scpy = (unsigned char *)s;
	conv = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (scpy[i] == conv)
		{
			return ((void *)scpy[i]);
		}
		i++;
	}
	return (NULL);
}
