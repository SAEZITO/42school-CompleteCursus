# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 13:50:55 by alsaez            #+#    #+#              #
#    Updated: 2023/10/20 12:16:08 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= Weapon

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
