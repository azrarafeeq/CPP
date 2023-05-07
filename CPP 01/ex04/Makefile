# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 11:52:26 by arafeeq           #+#    #+#              #
#    Updated: 2023/04/29 18:15:14 by arafeeq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filestream

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all