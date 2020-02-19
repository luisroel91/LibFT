/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:52:08 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:35:08 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (n)
	{
		if (*s1cpy++ != *s2cpy++)
		{
			return (*s1cpy - *s2cpy);
		}
		n--;
	}
	return (0);
}
