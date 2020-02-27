##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

NAME    = libmy.a

CC    = gcc

RM    = rm -f

SRC	=	my_printf.c	\
		my_putuint.c	\
		fun.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_putdectoct.c

OBJS    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all