# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/24 16:52:10 by cfeijoo           #+#    #+#              #
#    Updated: 2015/02/26 00:43:42 by cfeijoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_tests
INCLUDEFOLDERS = ../includes/

CC = clang

CFLAGS = -Wall -Werror -Wextra -O3
LDFLAGS = -L.. -lft


SRC = 	test_infin_number.c

OBJ = $(SRC:.c=.o)


# Colors
NO_COLOR     = \x1b[0m
OK_COLOR     = \x1b[32;01m
ERROR_COLOR  = \x1b[31;01m
WARN_COLOR   = \x1b[33;01m
SILENT_COLOR = \x1b[30;01m


# Basic Rules
.PHONY: all re clean fclean nomemory

all: $(NAME)

%.o: %.c
	@$(CC) -c $< -I$(INCLUDEFOLDERS) $(CFLAGS) -o $@

$(NAME): $(OBJ)
	@printf "$(SILENT_COLOR)Compiling $(NAME)...$(NO_COLOR)"
	@$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)
	@printf " $(OK_COLOR)Done ✓$(NO_COLOR)\n\n"
	@./$(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME).a

re: fclean all
