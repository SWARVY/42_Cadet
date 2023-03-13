# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 19:56:31 by sinhyeonho        #+#    #+#              #
#    Updated: 2023/03/13 20:14:56 by sinhyeonho       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRCS = 
OBJS = $(SRCS:.c=.o)
CC = cc -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

$(NAME) : $(AR) $(SRCS) -o $(OBJS)

all : $(NAME)

clean : $(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
