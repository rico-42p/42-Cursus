/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:44:48 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/07 15:40:15 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdint.h>
//#include <stdlib.h>
void	ft_neg(int n, size_t *nn, size_t *len)
{
	if (n == -2147483648)
		*nn = 2147483648;
	else
	{
		n *= -1;
		*nn = n;
	}
	*len = 1;
	return ;
}

void	ft_cpyint(char *nbr, size_t nn, size_t len)
{
	nbr[len] = '\0';
	while (len > 0)
	{
		nbr[len - 1] = (nn % 10 + 48);
		nn /= 10;
		len--;
	}
	return ;
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	nn;
	size_t	m;
	char	*nbr;

	len = 0;
	nn = 0;
	if (n < 0 || n == 0)
		ft_neg(n, &nn, &len);
	else
		(nn = n);
	m = nn;
	while (nn > 0)
	{
		nn /= 10;
		len++;
	}
	nbr = malloc(sizeof(*nbr) * (len + 1));
	if (!nbr)
		return (NULL);
	ft_cpyint(nbr, m, len);
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}
/*
#include<stdio.h>
#include <limits.h>
int main()
{
	int n = INT_MIN;
	int n1 = INT_MAX;
	int n2 = 0;
	int n3 = -0;
	int n4 = 000;
	int n5 = 1234;
	int n6 = 0123;
	int n7 = 0012;
	int n8 = -1234;
	int n9 = +12;

	printf("ft_: %s, %s, %s, %s, %s, %s, %s, %s, %s, %s\n", ft_itoa(n), 
	ft_itoa(n1), ft_itoa(n2), ft_itoa(n3), ft_itoa(n4), ft_itoa(n5), 
	ft_itoa(n6), ft_itoa(n7), ft_itoa(n8), ft_itoa(n9));
	printf("int: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", n, n1, n2, n3, 
	n4, n5, n6, n7, n8, n9);
	return 0;
}
*/
