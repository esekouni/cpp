# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:28:12 by esekouni          #+#    #+#              #
#    Updated: 2023/10/11 18:28:55 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Human

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

SRC = HumanA.cpp  \
		HumanB.cpp \
		main.cpp \
		Weapon.cpp
		
OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all