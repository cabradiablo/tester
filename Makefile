SRC = 	main.c 		\
		prueba.c		

OBJ = $(SRC:%.c=%.o)

####COMPILER
CC = gcc -g3
#CFLAGS = -Wall -Wextra -Werror 

#CFLAGS += -Imlx $(INC) -fsanitize=address -g3

####NAME
NAME = prueba

####LIBS
INC_DIR = libft
INC = -I $(INC_DIR) -I inc

####LINKER

LDFLAGS = -Llibft -lft -lmlx -framework OpenGL -framework AppKit

LDFLAGS += -g3 -fsanitize=address

####RULES

all: $(NAME)

$(NAME): $(OBJ)
	make -sC $(INC_DIR)
	$(CC) $(OBJ) $(LDFLAGS)  -o $(NAME)
	# @afplay /Users/alepinto/Music/Music/duffmanohyeah.mp3

clean:
	@rm  -f $(OBJ) || true
	make fclean -sC ./libft || true

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
