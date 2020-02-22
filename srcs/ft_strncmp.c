/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 21:51:07 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 15:15:52 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** While both are not null and both are equal and
** n is greater than 0
*/

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
