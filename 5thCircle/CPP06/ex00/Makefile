# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 11:49:49 by alsaez            #+#    #+#              #
#    Updated: 2023/11/09 15:13:08 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp ScalarConverter.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= Convert

CLANG	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98



all:	$(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY: all, clean, fclean, re,
