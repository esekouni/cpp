# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 16:58:52 by esekouni          #+#    #+#              #
#    Updated: 2023/10/15 17:37:59 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all