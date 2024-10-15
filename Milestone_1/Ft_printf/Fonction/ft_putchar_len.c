/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:58:10 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/07/10 20:10:48 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(char *c)
{
	size_t	len;

	if (c == NULL)
		return (ft_putchar_len("(null)"));
	len = 0;
	while (c[len])
		len++;
	write(1, c, len);
	return (len);
}
