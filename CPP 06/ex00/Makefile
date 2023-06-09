# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 16:37:46 by arafeeq           #+#    #+#              #
#    Updated: 2023/06/09 13:05:45 by arafeeq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = static

SRCS = ScalarConverter.cpp main.cpp print.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -f *.o

fclean : clean
		rm -f $(NAME)

re: fclean all
