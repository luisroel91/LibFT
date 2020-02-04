/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:43:05 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/04 16:48:33 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*scpy;
	char	conv;
	int		i;

	scpy = (char *)s;
	conv = (char)c;
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
