#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *str = "merhaba";
	
	ft_printf("%c\n", 'Q');
	printf("%c\n", 'Q');
	ft_printf("%s\n", "Zehra");
	printf("%s\n", "Zehra");
	ft_printf("%d\n", -2147483648);
	printf("%d\n", -2147483648);
	ft_printf("%i\n", 123);
	printf("%i\n", 123);
	ft_printf("%p\n", str);
	printf("%p\n", str);
	ft_printf("%x\n", 23);
	printf("%x\n", 23);
	ft_printf("%X\n", 23);
	printf("%X\n", 23);
	ft_printf("%u\n", 456);
	printf("%u\n", 456);
	ft_printf("%% \n");

	char *st = "World!";
	int i = 1;
	ft_printf("Hello %s, today is %dst of december \n", st, i);
}