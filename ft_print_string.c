#include "printf.h"

int	print_string(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		write(1, &str[counter++], 1);
	return (counter);
}
