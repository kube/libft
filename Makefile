# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/24 16:52:10 by cfeijoo           #+#    #+#              #
#    Updated: 2014/02/17 22:02:31 by cfeijoo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

INCLUDEFOLDERS = ./includes/

SOURCES_STRINGS = \
			sources/strings/ft_strchr.c			\
			sources/strings/ft_strlcat.c		\
			sources/strings/ft_strrchr.c		\
			sources/strings/ft_strclr.c			\
			sources/strings/ft_strlen.c			\
			sources/strings/ft_strsplit.c		\
			sources/strings/ft_strcmp.c			\
			sources/strings/ft_strmap.c			\
			sources/strings/ft_strstr.c			\
			sources/strings/ft_strdel.c			\
			sources/strings/ft_strncat.c		\
			sources/strings/ft_strtrim.c		\
			sources/strings/ft_strcpy.c			\
			sources/strings/ft_strmapi.c		\
			sources/strings/ft_strsub.c			\
			sources/strings/ft_strcat.c			\
			sources/strings/ft_strjoin.c		\
			sources/strings/ft_striter.c		\
			sources/strings/ft_strnequ.c		\
			sources/strings/ft_striteri.c		\
			sources/strings/ft_strnew.c			\
			sources/strings/ft_strequ.c			\
			sources/strings/ft_strdup.c			\
			sources/strings/ft_strncmp.c		\
			sources/strings/ft_strncpy.c		\
			sources/strings/ft_strnstr.c		\
			sources/strings/ft_strinarray.c		\
			sources/strings/ft_isprint.c		\
			sources/strings/ft_isalnum.c		\
			sources/strings/ft_isalpha.c		\
			sources/strings/ft_isascii.c		\
			sources/strings/ft_isdigit.c		\

SOURCES_MEMORY = \
			sources/memory/ft_memset.c			\
			sources/memory/ft_memdel.c			\
			sources/memory/ft_memmove.c			\
			sources/memory/ft_memalloc.c		\
			sources/memory/ft_memccpy.c			\
			sources/memory/ft_memcmp.c			\
			sources/memory/ft_memdup.c			\
			sources/memory/ft_memcpy.c			\
			sources/memory/ft_memchr.c			\
			sources/memory/ft_bzero.c			\

SOURCES_LISTS = \
			sources/lists/ft_lstfreeto.c		\
			sources/lists/ft_lstadd.c			\
			sources/lists/ft_lstqueueadd.c		\
			sources/lists/ft_lstiter.c			\
			sources/lists/ft_lstnew.c			\
			sources/lists/ft_lstdel.c			\
			sources/lists/ft_lstdelone.c		\
			sources/lists/ft_lstmap.c			\
			sources/lists/ft_lstrev.c			\

SOURCES_PRINT = \
			sources/print/ft_putstr_fd.c		\
			sources/print/ft_putnbrb.c			\
			sources/print/ft_putlnbr.c			\
			sources/print/ft_putchar.c			\
			sources/print/ft_putchar_fd.c		\
			sources/print/ft_putendl.c			\
			sources/print/ft_putendl_fd.c		\
			sources/print/ft_putnbr.c			\
			sources/print/ft_putstr.c			\
			sources/print/ft_putnbr_fd.c		\

SOURCES_CONVERT = \
			sources/convert/ft_abs.c			\
			sources/convert/ft_atoi.c			\
			sources/convert/ft_itoa.c			\
			sources/convert/ft_tolower.c		\
			sources/convert/ft_toupper.c		\

SOURCES_INPUT = \
			sources/input/ft_getchar.c			\

SOURCES_MATH = \
			sources/math/ft_sqrt.c				\
			sources/math/ft_cossin.c			\

SOURCES = 	$(SOURCES_CONVERT) $(SOURCES_INPUT) $(SOURCES_LISTS) $(SOURCES_MATH) \
			$(SOURCES_MEMORY) $(SOURCES_PRINT) $(SOURCES_STRINGS)

OBJECTS = $(SOURCES:.c=.o)

AR = ar
CFLAGS = -Wall -Werror -Wextra

.PHONY: all re clean fclean

all: $(NAME)

%.o : %.c
	@echo "Compiling $(<:.c=)"
	@$(CC) -c $< -I$(INCLUDEFOLDERS) $(CFLAGS) -o $@

$(NAME): $(OBJECTS)
	@echo "Generating LibFt..."
	@$(AR) rcs $(NAME).a $(OBJECTS)
	@echo "Finished compilation."

clean:
	@rm -f $(OBJECTS)
	@echo "Cleaned Objects"

fclean: clean
	@rm -f $(NAME).a
	@echo "Cleaned Library"

re: fclean all
