/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:18:05 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/30 17:08:01 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[10] = "";
	char	st[5] = "abcd";
	char	*sr = "123456789";

	printf("st: %lu, %lu, %lu,\nft: %lu, %lu, %lu,", strlen(str), strlen(st), 
	strlen(sr), ft_strlen(str), ft_strlen(st), ft_strlen(sr));
	return (0);
}
*/
