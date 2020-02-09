/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:13:33 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/08 19:56:54 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	conv;

	i = ft_strlen(s) + 1;
	conv = (char)c;
	while (i--)
	{
		if (s[i] == conv)
		{
			return (NULL);
		}
	}
	return ((char *)&s[i]);
}
