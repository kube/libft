# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/24 16:52:10 by cfeijoo           #+#    #+#              #
#    Updated: 2015/11/16 20:14:41 by cfeijoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft_tests
INCLUDEFOLDERS := ../include/

CFLAGS := -Wall -Werror -Wextra -O3
LDFLAGS := -L.. -lft

OBJECTS_FOLDER := obj/

SOURCES := 	test_infin_number.c		\
			test_math.c				\
			test_strings.c			\
			tests.c					\

OBJECTS := $(addprefix $(OBJECTS_FOLDER), $(SOURCES:.c=.o))


# Colors
NO_COLOR     := \x1b[0m
OK_COLOR     := \x1b[32;01m
ERROR_COLOR  := \x1b[31;01m
WARN_COLOR   := \x1b[33;01m
SILENT_COLOR := \x1b[30;01m


# Basic Rules
.PHONY: all re clean fclean obj

all: $(NAME)

$(OBJECTS_FOLDER)%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -I$(INCLUDEFOLDERS) $(CFLAGS) -o $@

$(NAME): $(OBJECTS)
	@printf "$(SILENT_COLOR)Compiling $(NAME)...$(NO_COLOR)"
	@$(CC) $(CFLAGS) $(OBJECTS) $(LDFLAGS) -o $(NAME)
	@printf " $(OK_COLOR)Done ✓$(NO_COLOR)\n\n"
	@./$(NAME)

clean:
	@rm -rf $(OBJECTS_FOLDER)
	@printf "$(SILENT_COLOR)$(NAME) : Removed objects$(NO_COLOR)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(SILENT_COLOR)$(NAME) : Removed tests$(NO_COLOR)\n"

re: fclean all
