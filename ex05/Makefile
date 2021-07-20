# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleveque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 16:09:48 by pleveque          #+#    #+#              #
#    Updated: 2021/07/20 17:19:27 by pleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ft_atoi.c\
	  ft_putstr.c\
	  main.c\
	  ft_putnbr_base.c\
	  get_operator.c\
	  operations.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	$(RM) $(NAME)

re: clean all
