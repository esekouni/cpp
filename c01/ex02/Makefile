# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 10:49:49 by esekouni          #+#    #+#              #
#    Updated: 2023/10/11 18:29:20 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = reference

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