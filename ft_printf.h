#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int     print_decimal(int decimal);
int     print_integer(int integer);
int	print_char(char c);
int	print_string(char *str);
int     print_percent(void);
char    *itoa_base(int n, int base, char* chr);
int    	sizenum_base(long n, int base);
int     print_hexa(unsigned int n);
int     print_hexa_upper(unsigned int n);
int     print_unsigned(unsigned long n);
int     print_address(unsigned long p);


#endif