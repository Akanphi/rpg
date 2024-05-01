##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## a makefile to compile
##

SRCS =	$(wildcard src/*.c)

OBJS = $(SRCS:.c=.o)

NAME = my_paint

CC =	gcc

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lcsfml-graphics -lcsfml-window -lcsfml-system

clean:
	rm -r -f src/*.o

fclean: clean
	rm -rf *.a

re: fclean all
