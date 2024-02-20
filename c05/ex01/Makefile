# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 10:30:17 by esekouni          #+#    #+#              #
#    Updated: 2023/11/20 21:30:43 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

SRC = main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJ = $(SRC:.cpp=.o)
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all