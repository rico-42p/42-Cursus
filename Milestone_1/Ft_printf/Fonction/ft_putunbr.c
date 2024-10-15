/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:45:07 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/11 15:47:08 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_compteu(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	unsigned int	nn;

	nn = n;
	if (n < 10)
	{
		n += '0';
		write(1, &n, 1);
	}
	else if (n > 9)
	{
		ft_putunbr(n / 10);
		n = n % 10 + '0';
		write(1, &n, 1);
	}
	return (ft_compteu(nn));
}
/*
int main()
{
	size_t n = -123456;
	ft_putunbr(n, 1);
	return 0;
}
*/
