/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:59:45 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 14:05:21 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If there is a string, call bzero with it
** and to get the len we just use the strlen
** function we made earlier, the last byte
** of the str should already be zeroed out
*/

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	if (s)
	{
		ft_bzero(s, ft_strlen(s));
	}
}
