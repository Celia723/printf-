/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:35:38 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 13:07:13 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_type(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == '%')
		count += write(1, "%", 1);
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		count += ft_putin(va_arg(args, int));
	if (format == 'u')
		count += ft_putinpositivo(va_arg(args, unsigned int));
	if (format == 'x')
		count += ft_puthex(va_arg(args, unsigned int));
	if (format == 'X')
		count += ft_puthex_mayus(va_arg(args, unsigned int));
	if (format == 'p')
		count += ft_putpun(va_arg(args, unsigned long));
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	total = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				total += find_type(format[i + 1], args);
			i += 2;
		}
		else
		{
			total += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (total);
}

/* int main()
{
	int count = 0;
	int *arr = (1, 4, 5);
	
	ft_printf("HOLA\n");
	ft_printf("HOla, %c\n", 'a');
	ft_printf("él me dijo: %s\n", "AAAAAAAAAAAAA");
	count = ft_printf("%d\n", 42);
	printf("%d\n", count);

	// printf(NULL);
	// ft_printf(NULL);
	printf("Original: %d\n", printf(NULL));
	printf("Celia: %d\n", ft_printf(NULL));
	ft_printf("%d\n", 2147483647);
	
	printf("%p\n", 1);
	printf("%x\n", "hola");
	printf("%p", 23456);
	return 0;
}
  */