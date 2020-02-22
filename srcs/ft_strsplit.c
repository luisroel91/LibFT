/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:59:09 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 22:15:24 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		number;
	char	**str;
	int		i;
	int		j;
	int		start;

	if ((s == 0) || (c == 0))
		return (NULL);
	number = ft_countwords(s, c);
	str = malloc((sizeof(char *) * (number + 1)));
	i = 0;
	j = -1;
	while (++j < number)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = ft_strsub(s, start, i - start);
		i++;
	}
	str[j] = NULL;
	return (str);
}
