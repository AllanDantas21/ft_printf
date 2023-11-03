#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int     print_decimal(int decimal);
int	print_char(char c);
int	print_string(char *str);

#endif
