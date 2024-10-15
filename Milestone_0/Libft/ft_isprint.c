/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:53:03 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 16:42:58 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
        char    *str = "|\\1";
	char    *st = "1aa:";
        char    *sr = "aa1";
        int     i = 0;


        while (str[i])
        {
        	printf("carract : %d,       %d,       %d\n", str[i], st[i], sr[i]);
		printf("isprint : %dstr,    %dst,     %dsr\n", isprint(str[i]),
	       	isprint(st[i]), isprint(sr[i]));
		printf("ft_     : %dstr,    %dst,     %dsr\n\n", ft_isprint(str[i]),
	       	ft_isprint(st[i]), ft_isprint(sr[i]));
        i++;
	}
        return 0;
}
*/
