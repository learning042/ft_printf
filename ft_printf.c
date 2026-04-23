/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:12:43 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/23 17:45:32 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int	i;
	va_list args;
	va_start(args, s);

	i = 0;
	while (*s)
	{
		if (*s == '%')
		{
			if (s[1] == 'c')
				ft_putchar((char) va_arg(args, int));
			else if (s[1] == 's')
				ft_putstr(va_arg(args, char *));
			else if (s[1] == 'p')
			{
				ft_putstr("0x");
				ft_putnbr_base((unsigned long) va_arg(args, void *), "0123456789abcdef");
			}
			else if (s[1] == 'i' || s[1] == 'd')
				ft_putnbr_base_i((int) va_arg(args, int), "0123456789");
			else if (s[1] == 'u')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
			else if (s[1] == 'x')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
			else if (s[1] == 'X')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
			else if (s[1] == '%')
				ft_putchar('%');
			s += 2;
			continue;
		}
		ft_putchar(*s);
		++s;
	}
	va_end(args);
	return (0);
}
