/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:52:19 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 14:53:34 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dcpy;
	char	*scpy;
	char	*temp;
	size_t	i;

	i = 0;
	dcpy = (char *)dst;
	scpy = (char *)src;
	temp = (char *)malloc(len * sizeof(char));
	if (!dst && !src)
		return (dst);
	while (i < len)
	{
		*(temp + i) = *(scpy + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(dcpy + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (dst);
}
