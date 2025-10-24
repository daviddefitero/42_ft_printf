# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:44:11 by dde-fite          #+#    #+#              #
#    Updated: 2025/10/24 20:56:08 by dde-fite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# *                            LIBFT by dde-fite                             * #
# **************************************************************************** #

# Files required for normal compilation: ft_atoi.c, ft_isspace.c,
# ft_memmove.c, ft_split.c, ft_strmapi.c, ft_toupper.c, ft_bzero.c, ft_itoa.c,
# ft_memset.c, ft_strchr.c, ft_strncmp.c, libft.h, ft_calloc.c, ft_minnbr.c,
# ft_strdup.c, ft_strndup.c, ft_isalnum.c, ft_maxnbr.c, ft_minsize.c,
# ft_striteri.c, ft_strnstr.c, ft_isalpha.c, ft_maxsize.c, ft_putchar_fd.c,
# ft_strjoin.c, ft_strrchr.c, ft_isascii.c, ft_memchr.c, ft_putendl_fd.c,
# ft_strlcat.c, ft_strtrim.c, ft_isdigit.c, , ft_memcmp.c,
# ft_putnbr_fd.c, ft_strlcpy.c, ft_substr.c, ft_isprint.c, ,
# ft_memcpy.c, ft_putstr_fd.c, ft_strlen.c, ft_tolower.c.

# Files required for bonus compilation:
# libft.a (or the name specified in ${NAME}), ft_lstnew_bonus.c,
# ft_lstadd_back_bonus.c, ft_lstsize_bonus.c, ft_lstadd_front_bonus.c,
# ft_lstclear_bonus.c, ft_lstdelone_bonus.c, ft_lstmap_bonus.c,
# ft_lstiter_bonus.c, ft_lstlast_bonus.c

# ******************************** VARIABLES  ******************************** #
SHELL := /bin/bash

# FILES
NAME		= libft.a
BONUSSRC	:= ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c \
				ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c \
				ft_lstlast_bonus.c
BONUSOBJ 	:= $(patsubst %.c,%.o,$(BONUSSRC))
TOTALBONUS	:= $(words $(BONUSSRC))
SRC			= ft_atoi.c ft_isspace.c ft_memmove.c ft_split.c ft_strmapi.c \
				ft_toupper.c ft_bzero.c ft_itoa.c ft_memset.c ft_strchr.c \
				ft_strncmp.c ft_calloc.c ft_minnbr.c ft_strdup.c \
				ft_strndup.c ft_isalnum.c ft_maxnbr.c ft_minsize.c \
				ft_striteri.c ft_strnstr.c ft_isalpha.c ft_maxsize.c \
				ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_isascii.c \
				ft_memchr.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c \
				ft_isdigit.c ft_memcmp.c ft_putnbr_fd.c ft_strlcpy.c \
				ft_substr.c ft_isprint.c ft_memcpy.c ft_putstr_fd.c \
				ft_strlen.c ft_tolower.c ft_nbrlen.c
OBJ			:= $(patsubst %.c,%.o,$(SRC))
TOTAL		:= $(words $(SRC))

# GCC COMPILER
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -c

# AR LIBRARY
AR			= ar
AFLAGS		= rcs
AFLAGSBONUS	= rs

# RM COMMAND
RM			= rm

# COLORS
GREEN		:= \033[1;32m
BLUE		:= \033[1;34m
YELLOW		:= \033[1;33m
PURPLE		:= \033[1;35m
CYAN		:= \033[1;36m
RED			:= \033[1;31m
RESET		:= \033[0m

# BAR
BAR_LEN		:= 100

# ********************************** RULES  ********************************** #
${NAME}: ${SRC}
	@echo -e "${PURPLE}"
	@echo "           _____            _____                    _____                    _____                _____           "
	@echo "          /\    \          /\    \                  /\    \                  /\    \              /\    \          "
	@echo "         /::\____\        /::\    \                /::\    \                /::\    \            /::\    \         "
	@echo "        /:::/    /        \:::\    \              /::::\    \              /::::\    \           \:::\    \        "
	@echo "       /:::/    /          \:::\    \            /::::::\    \            /::::::\    \           \:::\    \       "
	@echo "      /:::/    /            \:::\    \          /:::/\:::\    \          /:::/\:::\    \           \:::\    \      "
	@echo "     /:::/    /              \:::\    \        /:::/__\:::\    \        /:::/__\:::\    \           \:::\    \     "
	@echo "    /:::/    /               /::::\    \      /::::\   \:::\    \      /::::\   \:::\    \          /::::\    \    "
	@echo "   /:::/    /       ____    /::::::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \        /::::::\    \   "
	@echo "  /:::/    /       /\   \  /:::/\:::\    \  /:::/\:::\   \:::\ ___\  /:::/\:::\   \:::\    \      /:::/\:::\    \  "
	@echo " /:::/____/       /::\   \/:::/  \:::\____\/:::/__\:::\   \:::|    |/:::/  \:::\   \:::\____\    /:::/  \:::\____\ "
	@echo " \:::\    \       \:::\  /:::/    \::/    /\:::\   \:::\  /:::|____|\::/    \:::\   \::/    /   /:::/    \::/    / "
	@echo "  \:::\    \       \:::\/:::/    / \/____/  \:::\   \:::\/:::/    /  \/____/ \:::\   \/____/   /:::/    / \/____/  "
	@echo "   \:::\    \       \::::::/    /            \:::\   \::::::/    /            \:::\    \      /:::/    /           "
	@echo "    \:::\    \       \::::/____/              \:::\   \::::/    /              \:::\____\    /:::/    /            "
	@echo "     \:::\    \       \:::\    \               \:::\  /:::/    /                \::/    /    \::/    /             "
	@echo "      \:::\    \       \:::\    \               \:::\/:::/    /                  \/____/      \/____/              "
	@echo "       \:::\    \       \:::\    \               \::::::/    /                                                     "
	@echo "        \:::\____\       \:::\____\               \::::/    /                                                      "
	@echo "         \::/    /        \::/    /                \::/____/                                                       "
	@echo "          \/____/          \/____/                  ~~                                                             "
	@echo -e "${RED}"
	@echo "                                                   by dde-fite                                                   "
	@echo -e "${RESET}"
	@echo "Compiling libft functions ..."
	@echo -e "${YELLOW}"
	@count=0; \
	for file in ${SRC}; do \
		${CC} ${CFLAGS} $$file; \
		count=$$((count + 1)); \
		progress=$$((count * 100 / ${TOTAL})); \
		hashes_len=$$((progress * ${BAR_LEN} / 100)); \
		hashes=$$(printf '%0.s#' $$(seq 1 $$hashes_len)); \
		spaces_len=$$((BAR_LEN - hashes_len)); \
		spaces=$$(printf '%0.s ' $$(seq 1 $$spaces_len)); \
		printf "\r[%s%s] %d%%" "$$hashes" "$$spaces" "$$progress"; \
	done; \
	echo
	@echo -e "${RESET}"
	@echo "Archiving objects in ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGS} ${NAME} ${OBJ}
	@echo -e "${GREEN}Process completed :)${RESET}"
	@echo ""

all: ${NAME}

clean:
	@echo "Deleting all object files (.o of ft_*.c) ..."
	@echo ""
	@${RM} -rf ${OBJ} ${BONUSOBJ}

fclean: clean
	@echo "Deleting binary file (${NAME}) ..."
	@echo ""
	@${RM} -f ${NAME} .bonus

re: fclean all

.bonus: ${NAME} ${BONUSSRC}
	@echo "Compiling bonus functions ..."
	@echo -e "${CYAN}"
	@count=0; \
	for file in ${BONUSSRC}; do \
		${CC} ${CFLAGS} $$file; \
		count=$$((count + 1)); \
		progress=$$((count * 100 / ${TOTALBONUS})); \
		hashes_len=$$((progress * ${BAR_LEN} / 100)); \
		hashes=$$(printf '%0.s#' $$(seq 1 $$hashes_len)); \
		spaces_len=$$((BAR_LEN - hashes_len)); \
		spaces=$$(printf '%0.s ' $$(seq 1 $$spaces_len)); \
		printf "\r[%s%s] %d%%" "$$hashes" "$$spaces" "$$progress"; \
	done; \
	echo
	@echo -e "${RESET}"
	@echo "Adding objects to ${NAME} ..."
	@echo ""
	@${AR} ${AFLAGSBONUS} ${NAME} ${BONUSOBJ}
	@touch .bonus

bonus: .bonus
	@echo "bonus done.."

.PHONY: all clean fclean re bonus
