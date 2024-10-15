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

#include "libft.h"
//#include <unistd.h>
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
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
}
/*
int main()
{
	size_t n = -123456;
	ft_putnbr_fd(n, 1);
	return 0;
}
*/
