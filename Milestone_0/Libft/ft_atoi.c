/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:46:44 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/18 18:31:45 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	n;
	int	m;

	i = 0;
	nbr = 0;
	m = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			m *= -1;
		i++;
	}
	while (nptr[i] && '0' <= nptr[i] && nptr[i] <= '9')
	{
		n = nptr[i] - 48;
		nbr = 10 * nbr + n ;
		i++;
	}
	return (nbr * m);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[] = "\t\v\f\r\n \f-06050";

	printf("ft_a: %d,\n", ft_atoi(str));
        printf("atoi: %d,\n\n", atoi(str));
        return 0;
}
*/
