/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:15:37 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 16:42:11 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
        char    *str = "ù5dfs";
	char    *st = "1aaaa";
        char    *sr = "aaa1";
        int     i = 0;


        while (str[i])
        {
        	printf("carract : %d,    %d,   %d\n", str[i], st[i], sr[i]);
		printf("isascii : %dstr, %dst, %dsr\n", isascii(str[i]),
	       	isascii(st[i]), isascii(sr[i]));
		printf("ft_     : %dstr, %dst, %dsr\n\n", ft_isascii(str[i]),
	       	ft_isascii(st[i]), ft_isascii(sr[i]));
        i++;
	}
        return 0;
}
*/
