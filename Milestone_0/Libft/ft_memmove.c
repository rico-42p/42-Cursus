/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:52:01 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/30 20:53:17 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*de;
	char		*sr;

	if (dest == (void *)0 && src == (void *)0)
		return (NULL);
	de = (char *) dest;
	sr = (char *) src;
	i = 0;
	if (de > sr)
		while (n-- > 0)
			de[n] = sr[n];
	else
	{
		while (i < n)
		{
			de[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[] = "abcde";
	char des[] = "abcde";
	char src[] = "12345";
	char dt[] = "abcde";
        char de[] = "abcde";
	int n = 3;
	
	ft_memmove(dest + 2, dest, n);
	printf("ft_over : %s,\n", dest);
	memmove(des + 2, des, n);
	printf("memover : %s,\n\n", des);
	ft_memmove(dt, src, n);
        printf("ft_ : %s,\n", dt);
        memmove(de, src, n);
        printf("mem : %s,\n", de);
	return 0;
}
*/
