/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:35:52 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/03 19:45:04 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dcpy;
	char	*scpy;
	int		i;

	i = 0;
	dcpy = dest;
	scpy = src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dest);
}
