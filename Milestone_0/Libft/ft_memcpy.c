/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:51:46 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 18:29:49 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*de;
	unsigned char	*sr;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	de = (unsigned char *) dest;
	sr = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    str[] = "abcde";
        char    st[] = "1aaaa";
        //char    sr[] = "aaa1b";
	char	*dest;
	dest = ft_memcpy(str, st, 2);
        //printf("str: %s\n", memcpy(str, st, 2));
        //printf("str: %s\n\n", memcpy(str, sr, 2));
        printf("str: %s\n", dest);
        //printf("str: %s\n", ft_memcpy(str, sr, 2));

        return 0;
}
*/
