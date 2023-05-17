# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 13:06:28 by arafeeq           #+#    #+#              #
#    Updated: 2023/05/13 13:12:14 by arafeeq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

SRCS = ClapTrap.cpp main.cpp

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