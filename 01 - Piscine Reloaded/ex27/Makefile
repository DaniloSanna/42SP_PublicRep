FILENAME =  ft_display_file

HEADER = display_file.h

SRCS = display_file.c

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRCS:.c=.o}

REMOVE = rm -f

$(FILENAME):	$(OBJ)
	gcc -o $(FLAGS) $(FILENAME) $(OBJ)

.c.o:
	gcc -c $(FLAGS) $< -o $(<:.c=.o)

all:		$(FILENAME)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(FILENAME)

re: fclean all
