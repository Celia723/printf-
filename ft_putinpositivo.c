/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putinpositivo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:24:48 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 12:59:18 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putinpositivo(unsigned int n)
{
	int		count;
	char	modulo;
	char	num;

	count = 0;
	if (n >= 10)
	{
		count += ft_putinpositivo(n / 10);
		modulo = (n % 10) + '0';
		count += write(1, &modulo, 1);
	}
	else
	{
		num = n + '0';
		count += write (1, &num, 1);
	}
	return (count);
}
/* int main()
{
	int num = 457;
	int count = 0;

	count = ft_putinpositivo(num);
	ft_putinpositivo(count);
	return 0;
}
 */