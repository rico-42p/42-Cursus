/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:39:56 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/18 17:39:46 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			cst;
	const unsigned char		*str;
	size_t					i;

	cst = (unsigned char) c;
	str = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == cst)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    str[] = ":(){ :|: & };:";
	int	s = 15;
	int	a = '\xde';
	
	printf("ft_: %p,\n", (void *) ft_memchr(str, a, s));
        printf("str: %p,\n", (void *) memchr(str, a,  s));
    void *ft_result = ft_memchr(str, a, s);
    void *std_result = memchr(str, a, s);
    printf("ft_: %p\n", ft_result);
    printf("str: %p\n", std_result);
    if (ft_result)
        printf("ft_ char from found point: %s\n", (char *)ft_result);
    else
        printf("Char not found by ft_ within the first %d bytes.\n", s);
    if (std_result)
        printf("str char from found point: %s\n", (char *)std_result);
    else
        printf("Char not found by mem within the first %d bytes.\n", s);

return 0;
}
*/
