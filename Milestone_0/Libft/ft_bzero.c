/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:53:09 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 17:49:12 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	size_t		i;
	char		*str;

	str = (char *) src;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return ;
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
	char	str[] = "123456";
	unsigned long	i = 0;
	int	n = 3;
	ft_bzero(str, n);
	while (i < sizeof(str))
	{
		if (str[i] == '\0')
			str[i] = '.';
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
        
	char	sr[] = "123456";
        i = 0;
        bzero(sr, n);
        while (i < sizeof(sr))
        {
                if (sr[i] == '\0')
                        sr[i] = '.';
                printf("%c", sr[i]);
                i++;
	}

	return 0;
}
*/
