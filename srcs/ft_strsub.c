/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:10:16 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:47:17 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;

	newstr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!newstr)
	{
		return (NULL);
	}
	while (len)
	{
		*newstr[i] = s[start];
		i++;
		len--;
	}
	newstr[i] = '\0';
	return (newstr);
}
