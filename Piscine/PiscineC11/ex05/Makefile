# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:50:38 by alsaez            #+#    #+#              #
#    Updated: 2022/11/23 17:32:44 by alsaez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
       ft_putnbr.c \
       ft_op.c \
       main.c \

OBJT = $(SRCS:.c=.o)

NAME = do-op

FLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME)

$(NAME): $(OBJT)
	@$(CC) $(FLAGS) $^ -o $@

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJT)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
