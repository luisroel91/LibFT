/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:59:45 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/26 21:17:43 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If there is a string, call bzero with it
** and to get the len we just use the strlen
** function we made earlier, the last byte
** of the str should already be zeroed out
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
	{
		ft_bzero(s, ft_strlen(s));
	}
}
