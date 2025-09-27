NAME = seq_analyser

SRC = main.c\
		parsing.c\
		DNA_seq_composition.c\
		DNA_seq_finder_A.c\
		DNA_utils_seq_finder.c
	
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ)  -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
