#include "printf.h"

int	print_char(char c)
{
	int	counter;

	counter = write(1, &c, 1);
	return (counter);
}
