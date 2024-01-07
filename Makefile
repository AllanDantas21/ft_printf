SRC =  ft_printf.c ./src/ft_itoa.c ./src/ft_print_address.c ./src/ft_print_char.c ./src/ft_print_decimal.c ./src/ft_print_hexa.c ./src/ft_print_string.c ./src/ft_print_unsigned.c \
	./src/ft_utoa_base.c ./src/parse_specifiers.c ./src/parse_strings.c ./src/ft_utils.c

NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -rf
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) ./a.out

cc: $(NAME)
	cc -Wall -Wextra -Werror $(NAME) $(OBJ) main.c

re: fclean all

.PHONY: all clean fclean re
