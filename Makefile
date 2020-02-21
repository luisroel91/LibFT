# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 16:37:15 by luiroel           #+#    #+#              #
#    Updated: 2020/02/20 16:42:14 by luiroel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c
INCLUDES = includes/*.h
OBJ_NAMES = *.o

FLAGS = -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
		gcc $(FLAGS) -I$(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OBJ_NAMES)
		ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJ_NAMES)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
