/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 03:35:28 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/03 05:20:16 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct	s_list 	*next;
}					t_list;

int		ft_islowercase(int c);
int		ft_isuppercase(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);

#endif
