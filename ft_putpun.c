/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:36:29 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 13:03:16 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpun(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (!n)
		return (write(1, "(nil)", 5));
	if (n >= 16)
		count += ft_putpun(n / 16);
	if (n >= 0 && n < 16)
	{
		write(1, "0x", 2);
		count += 2;
	}
	count += write(1, &base[n % 16], 1);
	return (count);
}
