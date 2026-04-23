/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:51:09 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/22 19:10:37 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}
