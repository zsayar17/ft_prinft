# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 03:59:04 by mkacan            #+#    #+#              #
#    Updated: 2022/03/05 00:15:05 by aozsayar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

SRCS = ft_printf.c ft_putadress.c ft_putchar.c ft_puthexadec.c\
	   ft_putnbr.c ft_putstr.c ft_putunsignedint.c utilits.c\

GREEN = \033[0;92m

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME)
	@ECHO "\033[0;91m\nProgram checking..."

$(NAME): $(OBJS)
	@echo "\033[0;93m"
	ar rc $(NAME) $(OBJS)

clean:
	@echo "$(GREEN)Loading..."
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: clean re fclean all




