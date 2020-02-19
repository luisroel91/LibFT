/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:43:25 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:46:37 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strtrim(const char *s)
{
	int		len;
	int		start;
	int		i;
	char	*newstr;

	i = 0;
	len = ft_strlen(s);
	if (ft_iswhitespace(s[0]) != 0 && ft_iswhitespace(s[len]) != 0)
		return (s);
	if (ft_iswhitespace(s[len]))
		len -= 1;
	if (ft_iswhitespace(s[0]) == 0)
	{
		start = 1;
		len -= 1;
	}
	newstr = (char *)malloc(sizeof(char) * len + 1);
	while (s[start] != '\0' && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
