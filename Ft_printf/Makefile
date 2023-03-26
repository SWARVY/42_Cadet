NAME = ft_printf
SRCS = ft_printf.c ft_util.c
CC = gcc -Wall -Wextra -Werror
RM = rm -rf

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(SRCS) -I ft_printf.h

clean : 

fclean : clean
	$(RM) $(NAME)

re : fclean all