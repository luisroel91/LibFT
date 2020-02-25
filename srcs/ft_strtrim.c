/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:43:25 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/23 15:01:12 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(const char *s)
{
	char	*start;
	char	*sdup;
	int		i;

	if (!s || !(start = ft_strdup((char *)s)))
	{
		return (NULL);
	}
	sdup = start;
	while (ft_iswhitespace(*sdup))
	{
		sdup++;
	}
	i = ft_strlen(sdup) - 1;
	while (ft_iswhitespace(sdup[i]))
	{
		i--;
	}
	sdup[i + 1] = 0;
	sdup = ft_strdup(sdup);
	free(start);
	return (sdup);
}
