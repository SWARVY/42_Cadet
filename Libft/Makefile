# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 19:56:31 by sinhyeonho        #+#    #+#              #
#    Updated: 2023/03/20 16:23:10 by sinhyeonho       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = cc -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

.c.o : 
	$(CC) -c $< -o ${<:.c=.o} -I libft.h

$(NAME) : $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
