/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:46:04 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/30 20:44:49 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char str[] = "abc123ABC";
	char str1[] = "abc123ABC";
	char str2[] = "abc123ABC";
	char str3[] = "abc123ABC";
	char str4[] = "abc123ABC";
	char str5[] = "abc123ABC";
	
	printf("ft_: %c,\n", ft_toupper((unsigned char)str[0]));
        printf("tou: %c,\n\n", toupper((unsigned char)str1[0]));
        printf("ft_: %c,\n", ft_toupper((unsigned char)str2[3]));
        printf("tou: %c,\n\n", toupper((unsigned char)str3[3]));
	printf("ft_: %c,\n", ft_toupper((unsigned char)str4[6]));
        printf("tou: %c,\n", toupper((unsigned char)str5[6]));
	return 0;
}
*/
