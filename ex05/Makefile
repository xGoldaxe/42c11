# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleveque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 16:09:48 by pleveque          #+#    #+#              #
#    Updated: 2021/07/21 15:07:51 by pleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

CC		= gcc

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

SRCS 	= ft_atoi.c\
	  	ft_putstr.c\
	  	main.c\
	  	ft_putnbr_base.c\
	  	get_operator.c\
	  	operations.c

.c.o:		$(GCC) $(CFLAGS) -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			clean all
