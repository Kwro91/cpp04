# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/26 13:39:37 by besalort          #+#    #+#              #
#    Updated: 2024/08/22 16:59:54 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC = ./main.cpp \
	./srcs/Animal.cpp \
	./srcs/Dog.cpp \
	./srcs/Cat.cpp \
	./srcs/WrongAnimal.cpp \
	./srcs/WrongCat.cpp \
	./srcs/Brain.cpp \

CC =	c++

CPPFLAGS = -Wall -Werror -Wextra

AR = ar rcs

.cpp.o:
		${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

OBJ = $(SRC:.cpp=.o)

$(NAME) :	${OBJ}
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean
			make