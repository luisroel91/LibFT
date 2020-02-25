/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:11:53 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/24 18:32:01 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We declare a new string of len 10 to store our result
** (since max/min is 10 digits)
** If n is negative or 0 and our string is malloced
** correctly.
*/

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*str;

	number = n;
	len = (number > 0) ? 0 : 1;
	number = (number > 0) ? number : -number;
	while (n)
		n = len++ ? n / 10 : n / 10;
	str = (char *)malloc(sizeof(str) * len + 1);
	if (!str)
		return (NULL);
	*(str + len--) = '\0';
	while (number > 0)
	{
		*(str + len--) = number % 10 + '0';
		number /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
