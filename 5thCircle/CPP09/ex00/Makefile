# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 16:23:38 by alsaez            #+#    #+#              #
#    Updated: 2023/11/21 15:37:08 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp BitcoinExchange.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= btc

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
