/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:20 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/28 17:13:19 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	d;

	i = ft_strlen(dst);
	d = i;
	if (siz == 0)
		return (siz + ft_strlen(src));
	if (siz <= d)
		return (siz + ft_strlen(src));
	while (i < siz - 1 && src[i - d])
	{
		dst[i] = src[i - d];
		i++;
	}
	dst[i] = '\0';
	return (d + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
	char dest[14];
	dest[10] = 'a';
    	printf("ft_str   : %zu,  %s\n", ft_strlcat(dest, "t amet", 0), dest);

    write(1, "\n", 1);
    write(1, dest, 15);
	return 0;
}
*/
