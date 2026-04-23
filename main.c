#include "ft_printf.h"

int	main(void)
{
	// printf("hello%i");
	int	x = 10;
	int	*ptr = &x;
	char	*s = "hello";
	printf("%p\n", ptr);
	ft_putnbr_base((long) ptr, "0123456789abcdef");
	printf("%i\n", printf("\n%s\n", s));
	printf("%i\n", printf("%i\n", x));
	printf("%i\n", printf("%p\n", ptr));
	//ft_putstr("hello\n");
}
