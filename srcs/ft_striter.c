/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:05:47 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 14:09:37 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If there is a string and there is a function pointer
** pass every item in the string to the function
** then increase the counter until the string ends
*/

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(s[i]);
			i++;
		}
	}
}
