#include "printf.h"

int	main(void)
{	
	ft_printf("abacate\n");
	ft_printf("printando string: %s\n", "abacate");
	ft_printf("printando decimais: %d, %d\n", 42, -42);
	ft_printf("printando char: %c %c\n", 'a', 'b');
	ft_printf("printando percento: %%\n");
	ft_printf("printando hexa_lower: %x %x\n", 42, 1000);
	ft_printf("printando hexa_upper: %X %X\n", 42, 1000);
}
