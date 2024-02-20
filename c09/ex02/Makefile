# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:34:10 by esekouni          #+#    #+#              #
#    Updated: 2023/12/22 12:49:41 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

SRC = main.cpp \
		PmergeMe.cpp \
		

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ) PmergeMe.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
