# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anakin <anakin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 08:55:05 by anakin            #+#    #+#              #
#    Updated: 2025/03/05 08:55:22 by anakin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	moarBrainz
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INCLUDE	=	-I includes
RM		=	rm -rf

SRC		=	main Zombie zombieHorde
SRCS	=	$(addsuffix .cpp, $(SRC))

OBJ_D 	=	objs/
OBJ		=	$(SRC:%.c=%.o)
OBJS	=	$(addprefix $(OBJ_D), $(addsuffix .o, $(OBJ)))

$(OBJ_D)%.o : %.cpp
			@mkdir -p $(OBJ_D)
			@($(CC) $(FLAGS) $(INCLUDE) -c $< -o $@)

all:		$(NAME)

$(NAME):	$(OBJS)
			@($(CC) $(FLAGS) $(INCLUDE) $(OBJS) -o $(NAME))

clean:
			@($(RM) $(OBJ_D))

fclean: 	clean
			@($(RM) $(NAME))

re: 		fclean all

.PHONY:		all clean fclean re