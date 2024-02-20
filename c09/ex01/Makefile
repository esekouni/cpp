# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 09:56:57 by esekouni          #+#    #+#              #
#    Updated: 2023/12/11 15:35:46 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

SRC = main.cpp \
		RPN.cpp

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ) RPN.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
