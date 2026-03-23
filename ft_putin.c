/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:37:20 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 12:50:20 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putin(int n)
{
	long	nb;
	int		count;
	char	modulo;
	char	num;

	nb = n;
	count = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		count += ft_putin(nb / 10);
		modulo = (nb % 10) + '0';
		count += write(1, &modulo, 1);
	}
	else
	{
		num = nb + '0';
		count += write (1, &num, 1);
	}
	return (count);
}
// int main()
// {
// 	int count = 0;

// 	count= ft_putin(-83);
// 	ft_putin(count);
// 	return 0;
// }
