# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:22:01 by esekouni          #+#    #+#              #
#    Updated: 2023/10/26 18:13:39 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

SRC = main.cpp \
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all