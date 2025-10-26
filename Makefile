# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/26 20:02:00 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                          FT_PRINTF by dde-fite                           * #
# **************************************************************************** #

# ******************************** VARIABLES  ******************************** #
SHELL := /bin/bash

# FILES
NAME			= libftprintf.a
SRC_FILES		:= ft_printf.c argument_getters.c interruption_writers.c \
				printing_helpers.c integer_conversion.c char_conversion.c
SRC_FOLDER		= src
INCLUDE_FOLDER	= include
BUILD_FOLDER	= build
LIBFT_FOLDER	= libft
SRC				:= $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))
OBJ				:= $(addprefix $(BUILD_FOLDER)/,$(patsubst %.c,%.o,$(SRC_FILES)))
TOTAL			:= $(words $(SRC))

# GCC COMPILER
CC				= cc
# Delete -g
CFLAGS			= -fdiagnostics-color=always -g -Wall -Werror -Wextra -c -I$(INCLUDE_FOLDER) -I${LIBFT_FOLDER}

# AR LIBRARY
AR				= ar
AFLAGS			= rs

# COMMANDS
RM				= rm
MKDIR			= mkdir
CP				= cp

# COLORS
GREEN			:= \033[1;32m
BLUE			:= \033[1;34m
YELLOW			:= \033[1;33m
PURPLE			:= \033[1;35m
CYAN			:= \033[1;36m
RED				:= \033[1;31m
RESET			:= \033[0m

# BAR
BAR_LEN			:= 100

# ********************************** RULES  ********************************** #

${NAME}: ${SRC} ${LIBFT_FOLDER}/libft.a
	@echo -e "\n${PURPLE}"
	@echo " ░▒▓████████▓▒░▒▓████████▓▒           ░▒▓███████▓▒░░▒▓███████▓▒░░▒▓█▓▒░▒▓███████▓▒░▒▓████████▓▒░▒▓████████▓▒░ "
	@echo " ░▒▓█▓▒░         ░▒▓█▓▒░              ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░        "
	@echo " ░▒▓█▓▒░         ░▒▓█▓▒░              ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░        "
	@echo " ░▒▓██████▓▒░    ░▒▓█▓▒░              ░▒▓███████▓▒░░▒▓███████▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓██████▓▒░   "
	@echo " ░▒▓█▓▒░         ░▒▓█▓▒░              ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░        "
	@echo " ░▒▓█▓▒░         ░▒▓█▓▒░              ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░        "
	@echo " ░▒▓█▓▒░         ░▒▓█▓▒░  ░▒▓████▓▒░  ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░        "
	@echo -e "${RED}"
	@echo "                                                 by dde-fite                                                  "
	@echo -e "${RESET}Creating build folder if does not exist ...\n"
	@${MKDIR} -p ${BUILD_FOLDER}
	@echo -e "Compiling ft_printf files ...\n${YELLOW}"
	@count=0; \
	for file in ${SRC_FILES}; do \
		${CC} ${CFLAGS} -o ${BUILD_FOLDER}/$${file%.c}.o ${SRC_FOLDER}/$$file; \
		count=$$((count + 1)); \
		progress=$$((count * 100 / ${TOTAL})); \
		hashes_len=$$((progress * ${BAR_LEN} / 100)); \
		hashes=$$(printf '%0.s#' $$(seq 1 $$hashes_len)); \
		spaces_len=$$((BAR_LEN - hashes_len)); \
		spaces=$$(printf '%0.s ' $$(seq 1 $$spaces_len)); \
		printf "\r[%s%s] %d%%" "$$hashes" "$$spaces" "$$progress"; \
	done; \
	echo
	@echo -e "${RESET}\nCloning libft binary ...\n"
	@${CP} ${LIBFT_FOLDER}/libft.a ${NAME}
	@echo "Archiving objects in ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGS} ${NAME} ${OBJ}
	@echo -e "${GREEN}Process completed :)${RESET}"
	@echo ""

${LIBFT_FOLDER}/libft.a:
	@echo -e "${GREEN}--------------LIBFT-COMPILATION---------------"
	@${MAKE} -C ${LIBFT_FOLDER} all
	@echo -e "${GREEN}-----------END-OF-LIBFT-COMPILATION-----------${RESET}\n"

all: ${NAME}

clean:
	@echo "Deleting ${BUILD_FOLDER} and cleaning libft ..."
	@echo ""
	@${RM} -rf ${BUILD_FOLDER}
	@${MAKE} -C ${LIBFT_FOLDER} clean

fclean: clean
	@echo "Deleting binary file (${NAME}) and libft.a ..."
	@echo ""
	@${RM} -f ${NAME}
	@${MAKE} -C ${LIBFT_FOLDER} fclean

re: fclean all

.PHONY: all clean fclean re
