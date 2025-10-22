# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/22 16:57:30 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                        FT_PRINTF-TEST by dde-fite                        * #
# **************************************************************************** #

# ******************************** VARIABLES  ******************************** #
# FILES
NAME		= printf_test
SRC			:= $(wildcard *.c)
INCLUDE_FOLDER	= ../include
LIBFT_FOLDER	= ../libft

# GCC COMPILER
CC			= cc
CFLAGS		= -o ${NAME} -Wall -Wextra -Werror -I$(INCLUDE_FOLDER) -I${LIBFT_FOLDER}

# OTHER COMMANDS
RM			= rm
CP			= cp

# COLORS
GREEN		:= \033[1;32m
BLUE		:= \033[1;34m
YELLOW		:= \033[1;33m
PURPLE		:= \033[1;35m
CYAN		:= \033[1;36m
RED			:= \033[1;31m
RESET		:= \033[0m

# ********************************** RULES  ********************************** #
${NAME}: ${SRC} clean
	@echo -e "${PURPLE}╔═════════════════════════════════════════════════════════════════════════╗"
	@echo "║                             FT_PRINTF-TEST                              ║"
	@echo "║                              by dde-fite                                ║"
	@echo -e "╚═════════════════════════════════════════════════════════════════════════╝${RESET}"
	@echo -e "Compiling ft_Printf ...\n${GREEN}"
	@${MAKE} -C ../ re
	@echo -e "${RESET}Compiling tester ...\n"
	@${CC} ${CFLAGS} ${SRC} ../libftprintf.a
	@echo "Process completed :)"
	@echo ""

all: ${NAME}

clean:
	@echo "Cleaning binary file (${NAME}) and cleaning ft_Printf ..."
	@echo ""
	@${RM} -f ${NAME}
	@${MAKE} -C ../ clean

fclean: clean
	@echo "Fcleaning ft_Printf"
	@${MAKE} -C ../ fclean

re: fclean all

.PHONY: all clean fclean re
