# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 11:53:15 by esekouni          #+#    #+#              #
#    Updated: 2023/12/10 18:57:17 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Stack

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

SRC = main.cpp \

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ) MutantStack.hpp MutantStack.tpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
