NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print_char.c ft_printf.c \
       ft_print_decimal.c ft_print_string.c \
       ft_print_percent.c ft_itoa_base.c \
       ft_print_hexa.c ft_utoa_base.c ft_is_argument.c\
       ft_print_unsigned.c ft_print_address.c 
OBJS = $(SRCS:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean name

.PHONY: all clean fclean re
