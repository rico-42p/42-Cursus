/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:23:47 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/07/10 20:09:46 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	form(const char format, va_list args)
{
	unsigned int	i;

	i = 0;
	if (format == 'c')
		i += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		i += ft_putchar_len(va_arg(args, char *));
	else if (format == 'p')
		i += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'i' || format == 'd')
		i += ft_putnbr_fd(va_arg(args, int), 1);
	else if (format == 'u')
		i += ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_puthexa(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		i += ft_puthexa(va_arg(args, unsigned int), 'X');
	else if (format == '%')
		i += ft_putchar_fd('%', 1);
	else
		return (-1);
	return (i);
}

int	ft_printf(const char *format, ...)
	{
	va_list			args;
	unsigned int	len;
	unsigned int	i;
	int				fo;

	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			fo = form(format[i + 1], args);
			if (fo == -1)
				return (0);
			len += fo;
			i++;
		}
		else
			len += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

