FILENAME =  ft_display_file

FLAGS = -Wall -Wextra -Werror

REMOVE = rm -f

$(FILENAME):
	gcc $(FLAGS) $(FILENAME).c -o $(FILENAME)

all: $(FILENAME)

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(FILENAME)

re: fclean all
