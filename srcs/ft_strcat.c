/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:17:45 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 11:15:15 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create pointer to start of s1, so we don't
** lose track of the adress where the string starts
** then increase the pointer and make the value of
** each address equal to the source str
** set the value of our last address equal to
** a null term. Return s1
*/

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;

	str = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (str);
}
