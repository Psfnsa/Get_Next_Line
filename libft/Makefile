# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabanciu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/14 12:44:35 by mabanciu          #+#    #+#              #
#    Updated: 2018/02/14 15:13:44 by mabanciu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c \
	   	ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strnew.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memset.c \

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)


.PHONY: all, clean, fclean, re
