# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anakin <anakin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/15 14:43:49 by anakin            #+#    #+#              #
#    Updated: 2025/03/15 14:44:05 by anakin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harlFilter
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INCLUDE	=	-I includes
RM		=	rm -rf

SRC		=	main Harl
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