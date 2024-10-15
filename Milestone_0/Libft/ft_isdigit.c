/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:28:05 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/05/29 16:38:22 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
        char    *str = "abcgbhhhthd";
        char    *st = "1a,25aqwryu";
        char    *sr = "01234567891";
        int     i = 0;


        while (sr[i])
        {
		printf("isalpha : %d, %d, %d\n", isdigit(str[i]), 
		isdigit(st[i]), isdigit(sr[i]));
		printf("ft_ : %d, %d, %d\n\n", ft_isdigit(str[i]), 
		ft_isdigit(st[i]), ft_isdigit(sr[i]));
        i++;
	}
        return 0;
}
*/
