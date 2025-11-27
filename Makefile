CC = cc
HEADER = delcarations.h
FLAGS = -Wall -Wextra -Werror
HELPERS = printf.c specifier_c.c specifier_d.c specifier_i.c specifier_p.c specifier_s.c specifier_s.c specifier_u.c specifier_x.c specifier_X.c
OBJECTS = $(HELPERS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^
%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: re clean fclean all
