/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:55:07 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 16:21:39 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = ft_strnew(s1len + s2len);
	if (!newstr)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < s1len)
		newstr[i] = s1[i];
	while (++j < s2len)
		newstr[i++] = s2[j];
	return (newstr);
}
