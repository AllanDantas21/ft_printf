#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int     print_decimal(int decimal);
int	print_char(char c);
int	print_string(char *str);
int     print_percent(void);
char    *ft_itoa_base(int n, int base, char* chr);
int    	sizenum_base(long n, int base);

#endif
