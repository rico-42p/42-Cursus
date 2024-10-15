/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:45:07 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/11 15:47:08 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//chiffere negtif avec le compteur . verif comment il compt les neg
unsigned int	ft_compten(int n)
{
	int	i;

	i = 0;
	if (n == 0 || n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	nn;

	nn = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		n += '0';
		write(fd, &n, 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10 + '0';
		write(fd, &n, 1);
	}
	return (ft_compten(nn));
}
/*
#include <stdio.h>
int main()
{
	size_t n = 123456;
	int i = ft_putnbr_fd(n, 1);
	printf("\n%d", i);
	return 0;
}
*/