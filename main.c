#include "ft_printf.h"

int	main(void)
{
	// printf("hello%i");
	//int	x = 10;
	//int	*ptr = &x;
	//char	*s = "hello";
	//printf("%p\n", ptr);
	//ft_putnbr_base((long) ptr, "0123456789abcdef");
	//printf("%i\n", printf("\n%s\n", s));
	//printf("%i\n", printf("%i\n", x));
	//printf("%i\n", printf("%p\n", ptr));
	//ft_putstr("hello\n");
	int	a = 505;
	int	*b = &a;
	char *s = "oi";

	ft_printf("hello %u hello  hello%p%s %%", -1, b, s);
	//printf("hello %i hello %p  hello", a, b);
	//ft_putnbr_base((long) b, "0123456789abcdef");
	// printf("hello%");
}
