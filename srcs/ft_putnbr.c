/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 21:25:01 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 22:15:24 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putnbr(int n)
{
	unsigned int number;

	if (n < 0)
	{
		ft_putchar('-');
		number = (unsigned int)(n * -1);
	}
	else
	{
		number = (unsigned int)(n);
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar((char)(number % 10 + 48));
}
