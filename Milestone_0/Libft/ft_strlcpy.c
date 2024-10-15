/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:39:46 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/18 15:55:41 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsiz)
{
	size_t	i;
	size_t	srclen;
	size_t	s;

	srclen = ft_strlen(src);
	if (dst == 0 || dstsiz == 0)
		return (srclen);
	s = srclen + 1;
	if (dstsiz < s)
		s = dstsiz - 1;
	i = 0;
	while (i < s)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsiz != 0 && dstsiz <= srclen)
		dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    st[] = "abcdefgh";
	char    tes[0xF00];
        char    tes2[0xF00];

	memset(tes, 'A', 20);
	memset(tes, 'A', 20);
	printf("ft_str345:%zu,%s\n", ft_strlcpy(tes, st, 0), tes);
        printf("strcpy890:%s,%s;\n", strcpy(tes2, st), tes2);
        return 0;
}
*/
