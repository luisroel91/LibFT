/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:21:16 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/08 20:40:07 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
