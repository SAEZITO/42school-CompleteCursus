INC=/usr/include
INCLIB=$(INC)/../lib

NAME = philo
SRC = main.c \
	ft_atoi.c \
	status.c \
	init.c \
	philo.c

OBJ = $(SRC:.c=.o)
CC = gcc

LFLAGS = -pthread -g #-fsanitize=thread
FLAGS = -Wall -Werror -Wextra

# ------------------------------ Colors ------------------------------

BOLD_PURPLE     =       \033[1;35m

BOLD_CYAN       =       \033[1;36m

BOLD_YELLOW     =       \033[1;33m

NO_COLOR        =       \033[0m

# ------------------------------ Messages ------------------------------

HEADER_NAME		=		$(HEADER_TOP) $(HEADER_TOP_MID) $(HEADER_MID)$(HEADER_BOT)

HEADER_COMP     =       echo "\n🌐 $(BOLD_YELLOW)Philo $(NO_COLOR)by ltressen\n\n"

COMP_START      =       printf "\n🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Debut de compilation...\r"

EXE_READY       =       echo "\n\n📟 Compilation de $(BOLD_YELLOW)Philo$(NO_COLOR) reussie !\n"

CLEANED         =       echo "\n💧 $(BOLD_YELLOW)Clean: $(NO_COLOR)Suppression des fichiers .o \n"

FCLEANED        =       echo "\n🧼 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Suppression des fichiers .o et de l'executable \n"

NORM			= 		echo "\n📢 $(BOLD_CYAN)NORMINETTE: $(BOLD_YELLOW)Verification de la norme de tous les fichiers en .c !\n$(BOLD_PURPLE)"

NORM_H			=		echo "\n📣 $(BOLD_CYAN)NORMINETTE: $(BOLD_YELLOW)Verification de la norme du .h\n$(BOLD_PURPLE)"

# ------------------------------ Rules ------------------------------
MAKEFLAGS += --silent

$(NAME): comp_start $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(LFLAGS) -o $(NAME)
	echo "\n"
	@$(EXE_READY)

all: $(NAME) norminette

norminette:
	$(NORM)
	norminette *.c
	$(NORM_H)
	norminette -R checkDefine philo.h
	echo "\n"

comp_start:
	@$(HEADER_COMP)
	@$(COMP_START)

clean:
	$(CLEANED)
	rm -f $(OBJ) *~ core *.core

fclean: 
	rm -f $(NAME) $(OBJ) *~ core *.core
	$(FCLEANED)

re: clean all

%.o: %.c
	@printf "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Compilation des fichiers : %-33.33s\r$(NO_COLOR)" $@
	@${CC} ${FLAGS} -c $< -o $@
