# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 13:03:14 by esekouni          #+#    #+#              #
#    Updated: 2023/10/14 13:13:11 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

SRC = main.cpp \
		Harl.cpp

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all