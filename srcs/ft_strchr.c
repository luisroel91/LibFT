/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:01:43 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/08 18:33:18 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We create a counter and set it to
** zero then iterate through the string
** until we find the index where our char
** appears
** If we iterate through the whole string and
** dont find it, then we return NULL
** Otherwise, we return a pointer to the
** index in the string where the char was
** foind
*/

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i++])
		{
			return (NULL);
		}
	}
	return ((char *)&s[i]);
}
