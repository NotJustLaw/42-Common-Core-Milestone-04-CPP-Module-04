# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/04 13:27:58 by notjustlaw        #+#    #+#              #
#    Updated: 2026/05/19 13:03:58 by notjustlaw       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp dog.cpp cat.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re