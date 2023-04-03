NAME = libftprintf.a
SRCS = ft_printf.c ft_util.c
OBJS = $(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror
RM = rm -rf
AR = ar -rcs

.c.o :
	$(CC) -c $< -o $(<:.c=.o) -I ft_printf.h

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

all : $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all