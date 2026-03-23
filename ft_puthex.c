/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:48:50 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 12:53:50 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex (n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}
/* int main()
{
	printf("%x\n", -45);
	ft_printf("%x", -45);
	
	return 0;
} */
