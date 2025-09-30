NAME = seq_analyser

SRC = main.c\
		main_menu.c\
		parsing.c\
		displayers.c\
		DNA/DNA_seq_composition.c\
		DNA/DNA_seq_finder_A.c\
		DNA/DNA_seq_finder_A_all.c\
		DNA/DNA_seq_finder_Humming.c\
		DNA/DNA_seq_finder_Humming_all.c\
		DNA/DNA_utils.c\
		PROT/PROT_seq_composition.c\
		PROT/PROT_seq_finder_A.c\
		PROT/PROT_seq_finder_A_all.c\
		PROT/PROT_seq_finder_Humming.c\
		PROT/PROT_seq_finder_Humming_all.c\
		PROT/PROT_utils.c\

	
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
