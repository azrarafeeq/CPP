# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 16:59:50 by arafeeq           #+#    #+#              #
#    Updated: 2023/05/14 22:38:06 by arafeeq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
		$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all