/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:16:26 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 14:29:14 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We check if either the fucntion or the str are null
** if they are, we return null if not, we malloc the string
** if that fails, we return null too
** to whatever the str len is + 1 (for null term)
** loop through string, store function returns in our new
** str, null term string and then return our new str
*/

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL) || f == NULL)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
