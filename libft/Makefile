# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 15:43:38 by asantiag          #+#    #+#              #
#    Updated: 2019/05/23 16:17:50 by asantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isprint.c ft_memalloc.c ft_putchar.c ft_strcat.c ft_striter.c \
	  ft_strncmp.c ft_strsub.c ft_itoa.c ft_memccpy.c ft_putchar_fd.c \
	  ft_strchr.c ft_striteri.c ft_strncpy.c ft_strtrim.c ft_atoi.c \
	  ft_lstadd.c ft_memchr.c ft_putendl.c ft_strclr.c ft_strjoin.c \
	  ft_strnequ.c ft_tolower.c ft_bzero.c ft_lstdel.c ft_memcmp.c \
	  ft_putendl_fd.c ft_strcmp.c ft_strlcat.c ft_strnew.c ft_toupper.c \
	  ft_isalnum.c ft_lstdelone.c ft_memcpy.c ft_putnbr.c ft_strcpy.c \
	  ft_strlen.c ft_strnstr.c ft_isalpha.c ft_lstiter.c ft_memdel.c \
	  ft_putnbr_fd.c ft_strdel.c ft_strmap.c ft_strrchr.c ft_isascii.c \
	  ft_lstmap.c ft_memmove.c ft_putstr.c ft_strdup.c ft_strmapi.c \
	  ft_strsplit.c ft_isdigit.c ft_lstnew.c ft_memset.c ft_putstr_fd.c \
	  ft_strequ.c ft_strncat.c ft_strstr.c ft_strndup.c \
	  ft_is_sort.c ft_max.c ft_lowercase.c ft_uppercase.c ft_strndup.c

OBJECT = $(SRC:.c=.o)

OPTIONS = -c -I ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) $(OPTIONS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
			rm -f $(OBJECT)

fclean: clean 
			rm -f $(NAME)

re: fclean all
