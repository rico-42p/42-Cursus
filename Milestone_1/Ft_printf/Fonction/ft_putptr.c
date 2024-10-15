/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:54:25 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/07/10 16:54:33 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_comptep(uintptr_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	put_ptr(uintptr_t dec)
{
	if (dec >= 16)
	{
		put_ptr(dec / 16);
		put_ptr(dec % 16);
	}
	else
	{
		if (dec <= 9)
			ft_putchar_fd((dec + '0'), 1);
		else
			ft_putchar_fd((dec - 10 + 'a'), 1);
	}
}

int	ft_putptr(unsigned long long ptr)
{
	unsigned int	i;

	if (!ft_comptep(ptr))
		return (ft_putchar_len("(nil)"));
	i = write(1, "0x", 2);
	put_ptr(ptr);
	i += ft_comptep(ptr);
	return (i);
}
