/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:17:45 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 22:15:24 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create pointer to end of s1 (s1 + len(s1))
** then increase the pointer and make the value of
** each address equal to the source str
** set the value of our last address equal to
** a null term. Return s1
*/

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;

	str = s1 + ft_strlen(s1);
	while (*s2 != '\0')
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (str);
}
