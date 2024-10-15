/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:45:07 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/11 15:47:08 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_compte(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_puthexa(unsigned int n, int maj)
{
	char				*hex;
	unsigned int		nn;

	nn = n;
	if (maj < 97)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n < 16)
	{
		n = hex[n];
		write(1, &n, 1);
	}
	else if (n > 15)
	{
		ft_puthexa(n / 16, maj);
		ft_puthexa(n % 16, maj);
	}
	return (ft_compte(nn));
}
/*
#include<stdio.h>
int main()
{
	int n = 1231516;
	int maj = 'a';
	printf("\n%d 1er \n", n);
	ft_puthexa(n, maj);
	write(1, "\n", 1);
	printf ("\n%d 2eme\n", ft_puthexa(n, maj));

	return 0;
}
*/