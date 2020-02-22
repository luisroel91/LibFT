/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 01:30:09 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 15:29:52 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hptr;
	char	*nptr;
	size_t	i;

	if (!*needle)
	{
		return ((char *)haystack);
	}
	i = 0;
	while (*haystack && ++i < len)
	{
		hptr = (char *)haystack;
		nptr = (char *)needle;
		while (*nptr && *hptr == *nptr && i < len)
		{
			hptr++;
			nptr++;
			if (*nptr == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
