/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:21:16 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 22:15:24 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If the current value of our needle is a null
** term, return the haystack typecasted to char *
** Otherwise, while there is still data being pointed
** to in the haystack, set our pointers respectively.
** While the there is data being pointed to by nptr
** and if the values at hptr and nptr are the same,
** increase the pointers if not then increase the
** haystack pointer and keep looking
** When there is no more
** data in our needle stop there
** And return the current pointer to haystack
** typecasted to char *
*/

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*hptr;
	char	*nptr;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack)
	{
		hptr = (char *)haystack;
		nptr = (char *)needle;
		while (*nptr && *hptr == *nptr)
		{
			hptr++;
			nptr++;
		}
		if (*nptr == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
