/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:06:56 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 15:13:11 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We need two loops here, one with two conditions
** while there is still data in the src str and
** another that continues to zero out the dst
** string even after we've ran out of data
*/

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
