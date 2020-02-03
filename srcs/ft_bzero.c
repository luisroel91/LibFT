/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 04:29:50 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/03 04:40:21 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We can't work with void *s directly
** so first we need to create our intermidiary
** and then work with that. You'll also notice
** we're using a counter of type size_t, meaning
** our size in bytes. If the fed in size is 0
** we do nothing, otherwise while our counter
** is less than the size, we keep writing nulls
** until we've zeroed out the entire *s indirectly
*/

#include "../includes/libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	if (n == 0)
	{
		return ;
	}
	else
	{
		while (i < n)
		{
			str[++i] = '\0';
		}
	}
}
