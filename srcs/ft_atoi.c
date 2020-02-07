/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 04:18:57 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/07 17:25:40 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
			i++;
		}
		if (ft_isdigit(str[i]))
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
		{
			i++;
		}	
	}
	return (result * sign);
}
