/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 21:30:03 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/04 21:32:41 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)(n * -1);
	}
	else
	{
		number = (unsigned int)(n);
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd((char)(number % 10 + 48), fd);
}
