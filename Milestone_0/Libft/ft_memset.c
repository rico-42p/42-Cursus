/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:49:24 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 17:42:15 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (src);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    str[] = "abcd";
        char    st[] = "1aaaa";
        char    sr[] = "aaa1";
	char    des[] = "abcd";
        char    de[] = "1aaaa";
        char    ds[] = "aaa1";

        ft_memset(des, 57, 2);
        ft_memset(de, 57, 2);
        ft_memset(ds, 57, 2);
        printf("des: %s\n", des);
        printf("de: %s\n", de);
        printf("ds: %s\n", ds);
	memset(str, 57, 2);
        memset(st, 57, 2);
        memset(sr, 57, 2);
        printf("str: %s\n", str);
        printf("st: %s\n", st);
        printf("sr: %s\n", sr);
        return 0;
}
*/
