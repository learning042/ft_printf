/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:51:09 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/23 20:59:03 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void	ft_putstr(char *s, int *count)
{
	int	len;

	if (s == NULL)
	{
		len = ft_strlen("(null)");
		write(1, "(null)", len);
		*count += len;
		return ;
	}
	len = ft_strlen(s);
	write(1, s, len);
	*count += len;
}
