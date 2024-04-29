# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 10:10:18 by alsaez            #+#    #+#              #
#    Updated: 2023/10/31 11:57:02 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Dog.cpp Cat.cpp Animals.cpp WrongAnimal.cpp WrongCat.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= Polymorphism

CLANG	= c++

FLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all: $(NAME)

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
