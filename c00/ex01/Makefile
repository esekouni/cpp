# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 17:40:07 by esekouni          #+#    #+#              #
#    Updated: 2023/10/10 16:42:11 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

SRC = Contact.cpp  \
		PhoneBook.cpp
		
OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $^ -o $@
	
all : $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all