# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kube <kube@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/24 16:52:10 by cfeijoo           #+#    #+#              #
#    Updated: 2014/01/07 22:38:48 by kube             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

INCLUDEFOLDER = ./includes/
CFILES =	ft_isprint.c		\
			ft_lstrev.c			\
			ft_memset.c			\
			ft_lstfreeto.c		\
			ft_strchr.c			\
			ft_strlcat.c		\
			ft_strrchr.c		\
			ft_putchar.c		\
			ft_strclr.c			\
			ft_strlen.c			\
			ft_strsplit.c		\
			ft_itoa.c			\
			ft_putchar_fd.c		\
			ft_strcmp.c			\
			ft_strmap.c			\
			ft_strstr.c			\
			ft_memalloc.c		\
			ft_putendl.c		\
			ft_strcpy.c			\
			ft_strmapi.c		\
			ft_strsub.c			\
			ft_atoi.c			\
			ft_memccpy.c		\
			ft_putendl_fd.c		\
			ft_strdel.c			\
			ft_strncat.c		\
			ft_strtrim.c		\
			ft_bzero.c			\
			ft_memchr.c			\
			ft_putnbr.c			\
			ft_strdup.c			\
			ft_strncmp.c		\
			ft_tolower.c		\
			ft_isalnum.c		\
			ft_memcmp.c			\
			ft_putnbr_fd.c		\
			ft_strequ.c			\
			ft_strncpy.c		\
			ft_toupper.c		\
			ft_isalpha.c		\
			ft_memcpy.c			\
			ft_putstr.c			\
			ft_striter.c		\
			ft_strnequ.c		\
			ft_isascii.c		\
			ft_memdel.c			\
			ft_putstr_fd.c		\
			ft_striteri.c		\
			ft_strnew.c			\
			ft_isdigit.c		\
			ft_memmove.c		\
			ft_strcat.c			\
			ft_strjoin.c		\
			ft_strnstr.c		\
			ft_lstnew.c			\
			ft_lstdel.c			\
			ft_lstdelone.c		\
			ft_lstadd.c			\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_poutrellestr.c	\
			ft_putnbrb.c		\
			ft_memdup.c			\
			ft_putlnbr.c		\
			ft_lstqueueadd.c	\
			ft_strinarray.c		\
			ft_getchar.c		\
			ft_abs.c			\
			ft_sqrt.c			\
			ft_cossin.c

OFILES = $(CFILES:.c=.o)

CC = cc
AR = ar
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) -c -I$(INCLUDEFOLDER) $(CFILES) $(CFLAGS)
	$(AR) rcs $(NAME).a $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME).a

re: fclean all
