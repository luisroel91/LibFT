/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 03:40:13 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/21 16:34:56 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putchar(char c)
{
	//size_t	len;
	//size_t	count;
	//char	utf8buf[4];

	if (ft_isascii(c))
	{
		write(1, &c, 1);
	}

	//else
	//{
	//	if (c < 0 || c > 0x10ffff)
	//	{
	//		return (EOF);
	//	}
	//}
}
