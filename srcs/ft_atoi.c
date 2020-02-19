/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 04:18:57 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:47:17 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

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
				sign = -1;
			i++;
		}
		if (ft_isdigit(str[i]))
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		i++;
	}
	return (result * sign);
}
