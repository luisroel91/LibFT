/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 01:30:09 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/18 09:32:37 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hptr;
	char	*nptr;
	size_t	needlen;
	int		i;

	i = 0;
	needlen = ft_strnlen(needle, len);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack)
	{
		hptr = (char *)haystack;
		nptr = (char *)needle;
		while (*nptr && *hptr == *nptr && i <= (int)(len - needlen))
		{
			hptr++;
			nptr++;
		}
		if (*nptr == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
