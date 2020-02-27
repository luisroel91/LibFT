/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:55:07 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/26 21:17:43 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(*newstr) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
