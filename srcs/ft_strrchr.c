/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:13:33 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:47:17 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

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
			return (s[i]);
		}
	}
	return ((char *)&s[i]);
}
