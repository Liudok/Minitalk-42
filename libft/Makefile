# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/02 16:53:03 by rtulchiy          #+#    #+#              #
#    Updated: 2018/05/20 12:55:55 by lberezyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = ft_arprint.o ft_iswhitespaces.o ft_lstnew.o ft_pow.o\
	  ft_sortarr.o ft_striter.o ft_strnequ.o ft_atoi.o ft_itoa.o\
	  ft_lstsearch.o ft_putchar.o ft_sortint.o ft_striteri.o\
	  ft_strnew.o ft_bzero.o ft_lstadd.o ft_memalloc.o ft_putchar_fd.o\
	  ft_strcat.o ft_strjoin.o ft_strnstr.o ft_field.o ft_lstadd2.o\
	  ft_memccpy.o ft_putendl.o ft_strchr.o ft_strlcat.o ft_strrchr.o\
	  ft_field2.o ft_lstdel.o ft_memchr.o ft_putendl_fd.o ft_strclr.o\
	  ft_strlen.o ft_strsplit.o ft_isalnum.o ft_lstdelone.o ft_memcmp.o\
	  ft_putnbr.o ft_strcmp.o ft_strmap.o ft_strstr.o ft_isalpha.o\
	  ft_lstiter.o ft_memcpy.o ft_putnbr_fd.o ft_strcpy.o ft_strmapi.o\
	  ft_strsub.o ft_isascii.o ft_lstmap.o ft_memdel.o ft_putstr.o ft_strdel.o\
	  ft_strncat.o ft_strtrim.o ft_isdigit.o ft_lstn.o ft_memmove.o ft_putstr_fd.o\
	  ft_strdup.o ft_strncmp.o ft_tolower.o ft_isprint.o ft_lstnadd.o ft_memset.o\
	  ft_root_of_num.o ft_strequ.o ft_strncpy.o ft_toupper.o ft_strjoin_modf.o\
	  ft_realloc.o ft_isnumber.o ft_isint.o ft_realloc_modf.o ft_adrlen.o \
	  ft_itoa_base.o

NAME = libft.a
INCLUDES = ../includes/libft.h
CFLAGS = -Wall -Werror -Wextra

%.o: %.c $(INCLUDES)
	@gcc $(CFLAGS) -c $< -I ../includes

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
