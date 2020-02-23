/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:11:53 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/22 15:58:42 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We declare a new string of len 10 to store our result
** (since max/min is 10 digits)
** If n is negative or 0 and our string is malloced
** correctly.
*/

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	char *str;

	if (!(str = (char *)ft_memalloc(10)))
		return (0);
	if (n >= 0 && str)
	{
		*--str = '0' + (n % 10);
		n = n / 10;
		while (n != 0)
		{
			*--str = '0' + (n % 10);
			n = n / 10;
		}
	}
	else if (str)
	{
		*--str = '0' - (n % 10);
		n = n / 10;
		while (n != 0)
		{
			*--str = '0' - (n % 10);
			n = n / 10;
		}
		*--str = '-';
	}
	return (ft_strdup(str));
}
