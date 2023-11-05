#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{	
	int	counter;
	int *p = (void *)'b';
	int f = 42;	
	ft_printf("***********************************\n");
	ft_printf("***********    Strings    *********\n");
	ft_printf("***********************************\n");
	ft_printf("\n");

	ft_printf("printando string: %s\n", "abacate");
	counter = ft_printf("abacate\n");
	printf("ft_printf return: %d\n", counter);
	counter = 0;
	counter = printf("abacate\n");
	printf("printf return: %d\n", counter);
	printf("\n");

	ft_printf("***********************************\n");
        ft_printf("***********    decimais    ********\n");
        ft_printf("***********************************\n");
	ft_printf("\n");

	counter = ft_printf("printando decimais: %d, %d, %d\n", 42, -42, 282617184);
	printf("ft_printf retorno: %d\n", counter);
	counter = printf("printando decimais: %d, %d, %d\n", 42, -42, 282617184);
	printf("printf retorno: %d\n", counter);
	ft_printf("\n");


	ft_printf("***********************************\n");
        ft_printf("***********    inteiros    ********\n");
        ft_printf("***********************************\n");
	ft_printf("\n");

	counter = ft_printf("printando inteiros: %i %i %i\n", 42, -42, f);
	printf("ft_printf retorno: %d\n", counter);
	counter = printf("printando inteiros: %i %i %i\n", 42, -42, f);
	printf("printf retorno: %d\n", counter);
	ft_printf("\n");
	

	ft_printf("printando char: %c %c\n", 'a', 'b');
	ft_printf("printando percento: %%\n");
	ft_printf("printando hexa_lower: %x, %x\n", 42, 1000);
	ft_printf("printando hexa_upper: %X %X\n", 42, 1000);
	ft_printf("printando unsigned: %u %u\n", 42, -100);
	printf("printando ponteiro: %p\n", p);
	ft_printf("printando ponteiro: %p\n", p);


	ft_printf("PRINTANDO HEX NEGATIVE: %x\n ", -42);

	ft_printf("teste 0 em pointer-> %p\n", 0); 
	printf("teste 0 em pointer-> %p\n", (void*)0);
}
