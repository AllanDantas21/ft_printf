#include "printf.h"

int	main(void)
{	
	int	i = 42;

	ft_printf("abacate\n");
	ft_printf("printando string: %s\n", "abacate");
	ft_printf("printando decimais: %d\n", i);
	ft_printf("printando char: %c %c\n", 'a', 'b');
	ft_printf("printando percento: %%\n");
}
