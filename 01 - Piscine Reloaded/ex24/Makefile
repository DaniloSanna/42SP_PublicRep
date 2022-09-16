SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = ./includes

OBJ = ${SRCS:.c=.o}

MYLIB = libft.a

REMOVE = rm -f

FLAGSC = -Wall -Werror -Wextra

.c.o:
	gcc $(FLAGS) -c $< -I $(INCLUDES) ${<:.c=.o}

${MYLIB}: ${OBJ}
	ar rc ${MYLIB} $<

all: ${MYLIB}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${MYLIB}

re: fclean clean

.PHONY: all clean fclean re
