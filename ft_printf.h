/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:59:45 by ceboyero          #+#    #+#             */
/*   Updated: 2026/02/16 13:07:05 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(int c);
int	ft_puthex(unsigned int n);
int	ft_puthex_mayus(unsigned int n);
int	ft_putin(int n);
int	ft_putstr(char *str);
int	ft_putinpositivo(unsigned int n);
int	ft_putpun(unsigned long n);

#endif