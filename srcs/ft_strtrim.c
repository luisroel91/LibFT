/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:43:25 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 21:17:38 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

char	*ft_strtrim(const char *s)
{
	int		num[3];
	char	*newstr;

	num[2] = 0;
	num[1] = 0;
	num[0] = ft_strlen((char *)s);
	if (ft_iswhitespace(s[0]) != 0 && ft_iswhitespace(s[num[0]]) != 0)
		return ((char *)s);
	if (ft_iswhitespace(s[num[0]]))
		num[0] -= 1;
	if (ft_iswhitespace(s[0]) == 0)
	{
		num[1] = 1;
		num[0] -= 1;
	}
	newstr = (char *)malloc(sizeof(char) * num[0] + 1);
	while (s[num[1]] != '\0' && num[2] < num[0])
	{
		newstr[num[2]] = s[num[1]];
		num[2]++;
		num[1]++;
	}
	newstr[num[2]] = '\0';
	return (newstr);
}
