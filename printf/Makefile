# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 15:58:12 by zghouzla          #+#    #+#              #
#    Updated: 2022/07/06 15:58:14 by zghouzla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS= ft_printf_utils1.c ft_printf.c ft_putstr.c
OBJS=$(SRCS:.c=.o)
NAME= libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	$(CC)  $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
