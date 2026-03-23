/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_mayus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:01:02 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 13:14:08 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_mayus(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthex_mayus(n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}
