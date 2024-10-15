/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:18:51 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/28 17:52:22 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == 0)
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && big[i + j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int     main()
{
        char    str[] = "ridouane";
	//char    str1[] = "ridouane";
	char    s[] = "idou";
	int	a = -1;

	printf("ft_: %s,\n", ft_strnstr(str, s, a));
        //printf("str: %d,\n", strnstr(str1, s,  a));
        return 0;
}
*/
