/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:57:26 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 16:37:15 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
        char    *str = "abcd";
        char    *st = "1aaaa";
        char    *sr = "aaa1";
        int     i = 0;


        while (st[i])
        {
                printf("isalpha : %d, %d, %d\n", isalpha(str[i]), isalpha(st[i]),
		isalpha(sr[i]));
		printf("ft_ : %d, %d, %d\n\n", ft_isalpha(str[i]),
	       	ft_isalpha(st[i]), ft_isalpha(sr[i]));
        i++;
	}
        return 0;
}
*/
