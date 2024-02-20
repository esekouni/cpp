# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 12:47:02 by esekouni          #+#    #+#              #
#    Updated: 2023/10/13 18:38:09 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

SRC = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp 

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all