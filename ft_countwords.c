/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:16:39 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 17:06:05 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countwords(const char *s, char c)
{
	int	count;
	int	temp;

	count = 0;
	temp = 0;
	while (*s)
	{
		if (temp == 1 && *s == c)
		{
			temp = 0;
		}
		if (temp == 0 && *s != c)
		{
			temp = 1;
			count++;
		}
		s++;
	}
	return (count);
}
