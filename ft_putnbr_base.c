/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:41:06 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/23 21:17:26 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

static void	ft_putnbr_base_recursive(long long n, char *base, long long len_base, int *count)
{
	if (n < len_base)
	{
		ft_putchar(base[n], count);
		return ;
	}
	ft_putnbr_base_recursive(n / len_base, base, len_base, count);
	ft_putnbr_base_recursive(n % len_base, base, len_base, count);
}

void	ft_putnbr_base(long long n, char *base, int *count)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	ft_putnbr_base_recursive(n, base, len_base, count);
}

void	ft_putnbr_base_i(int n, char *base, int *count)
{
	ft_putnbr_base((int) n, base, count);
}
