# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 13:06:28 by arafeeq           #+#    #+#              #
#    Updated: 2023/05/13 18:15:59 by arafeeq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
		$(CPP) $(CPPFLAS) $(OBJS) -o $(NAME)
clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all