NAME	= libft.a

SRC	= $(wildcard src/*.c)

FLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.c=.o)

INCLUDE = include

HEADER = libft.h

TEST = test

CC = gcc

RM = rm -f

all: $(NAME)

test:
	$(CC) $(FLAGS) $(TEST)/$(FILE).c src/$(FILE).c -L. -lft -o $(FILE) -I $(INCLUDE)

tclean:
	$(RM) $(wildcard *.exe)
	$(RM) $(wildcard *.txt)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDE)

clean:
	$(RM) $(OBJ)

fclean: clean tclean
	$(RM) $(NAME)
	$(RM) $(TEST)/$(HEADER)

re: fclean all

.PHONY: all test tclean clean fclean re