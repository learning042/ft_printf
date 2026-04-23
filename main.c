#include "ft_printf.h"
#include <limits.h>

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

	int	c = ft_printf("hello %u hello  hello%p%s %%\n", -1, b, s);
	ft_printf("%i\n", c);

	int d = printf("hello %u hello  hello%p%s %%\n", -1, b, s);
	printf("%i\n", d);
	printf(" NULL %s NULL ", NULL);
	printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p ", 0, 0);
	ft_printf(" %p %p ", 0, 0);
	//printf("hello %i hello %p  hello", a, b);
	//ft_putnbr_base((long) b, "0123456789abcdef");
	// printf("hello%");
}
