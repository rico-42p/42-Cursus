/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:34:48 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/18 18:04:35 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*dst;
	size_t				i;

	if (n == 0)
		return (0);
	dst = (const unsigned char *) s1;
	str = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)dst[i] != (unsigned char)str[i])
			return ((unsigned char)dst[i] - (unsigned char)str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    str[] = "\xff\xaa\xde\x12";
	char    s[] = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t	a = 88888888;
	char	b;
	char 	c;

	b = ft_memcmp(str, s, a);
        c = memcmp(str, s,  a);

	printf("ft_: %d,\n", b);
        printf("str: %d,\n", c);
        return 0;
}
*/
