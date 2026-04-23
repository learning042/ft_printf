/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:41:06 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/22 21:18:11 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define LENBASE 

static size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

static void	ft_putnbr_base_recursive(long n, char *base, size_t len_base)
{
	if (n < len_base)
	{
		ft_putchar(base[n]);
		return ;
	}
	ft_putnbr_base_recursive(n / len_base, base, len_base);
	ft_putnbr_base_recursive(n % len_base, base, len_base);
}

void	ft_putnbr_base(long n, char *base)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	ft_putnbr_base_recursive(n, base, len_base);
}
	
