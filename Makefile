NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print_char.c ft_printf.c \
       ft_print_decimal.c ft_print_string.c \
       ft_print_percent.c ft_itoa_base.c \
       ft_print_hexa.c ft_utoa_base.c ft_isflag.c\
       ft_print_unsigned.c ft_print_address.c main.c
OBJS = $(SRCS:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS) a.out

fclean: clean
	$(RM) $(NAME)

RE: fclean name

cc: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

.PHONY: all clean fclean 
