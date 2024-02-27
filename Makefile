all : build

build : 
	@sudo hostsed add 127.0.0.1 alsaez.42.fr && echo "\033[1;32m~|ADD alsaez.42.fr to /etc/hosts|~\033[0m"
	@docker-compose -f ./srcs/docker-compose.yml up -d

down : 
	@sudo hostsed rm 127.0.0.1 alsaez.42.fr && echo "\033[1;31m~|DELETE alsaez.42.fr from /etc/hosts|~\033[0m"
	@docker-compose -f ./srcs/docker-compose.yml down

stop : 
	@docker-compose -f ./srcs/docker-compose.yml stop

start : 
	@docker-compose -f ./srcs/docker-compose.yml start

status : 
	@docker ps

clean : down
	@docker image rm wordpress -f
	@docker image rm mariadb -f
	@docker image rm nginx -f
	@docker volume rm mariadb
	@docker volume rm wordpress && echo "\033[1;33m~| Nettoyage des images/containers/volumes de Docker : OK |~\033[0m"\
	
fclean : clean
	@sudo rm -rf /home/$USER/docker/_data/wordpress/*
	@sudo rm -rf /home/$USER/docker/_data/mariadb/*
	@docker system prune -af && echo "\033[1;33m~| Nettoyage du cache de Docker : OK |~\033[0m"


# minimal color codes
END=$'\x1b[0m
REV=$'\x1b[7m
GREY=$'\x1b[30m
RED=$'\x1b[31m
GREEN=$'\x1b[32m
CYAN=$'\x1b[36m
WHITE=$'\x1b[37m

# NAME = inception

# all : $(NAME)

# $(NAME) : build
# 	@make up

# build :
# 	@echo "${YELLOW}> Image building 🎉${END}"
# 	@mkdir -p ${HOME}/inception/data/wordpress
# 	@mkdir -p ${HOME}/inception/data/mariadb
# 	@mkdir -p ${HOME}/inception/data/adminer
# 	@docker-compose -f ./srcs/docker-compose.yml build
		
# up :
# 	@echo "${YELLOW}> Turning up images 🎉${END}"
# 	@docker-compose -f ./srcs/docker-compose.yml up -d
	
# down :
# 	@echo "${YELLOW}> Turning down images ❌${END}"
# 	@docker-compose -f ./srcs/docker-compose.yml down

# re:
# 	@make down
# 	@make clean
# 	@make build
# 	@make up

# clean: down
# 	@echo "${YELLOW}> Cleaning and deleting all images 🧹${END}"
# 	@ { docker volume ls -q ; echo null; } | xargs -r docker volume rm --force
# 	@sudo rm -rf ${HOME}/data/

# .PHONY:	all re down clean up build