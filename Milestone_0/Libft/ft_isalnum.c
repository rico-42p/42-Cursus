/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:52:52 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 16:40:48 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
        char    *str = "abcd6.";
        char    *st = ";1aaaa";
        char    *sr = "/.';[,['aaa11....,/.[";
        int     i = 0;


        while (sr[i])
        {
                printf("isalpha : %d, %d, %d\n", isalnum(str[i]),
	       	isalnum(st[i]), isalnum(sr[i]));
		printf("ft_     : %d, %d, %d\n\n", ft_isalnum(str[i]), 
		ft_isalnum(st[i]), ft_isalnum(sr[i]));
        i++;
	}
        return 0;
}
*/
