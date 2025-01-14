.PHONY: all clean fclean re bonus

#####################################################
#####                   files                   #####
#####################################################

SRC = src/

#####################################################
#####                 variables                 #####
#####################################################

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
HEADER = inc/libft.h
OBJ = $(SRC:.c=.o)

#####################################################
#####                  commands                 #####
#####################################################

all: $(NAME)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I . -c $< -o $@ 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
