/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:58:23 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/28 18:27:50 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cst;
	char			*adr;

	cst = (char) c;
	adr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cst)
			adr = ((char *) &s[i]);
		i++;
	}
	if (s[i] == cst)
		adr = ((char *) &s[i]);
	return (adr);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char    str[] = "teste";
	char	a = '\0';

	printf("ft_: %s,\n", ft_strrchr(str, a));
        printf("str: %s,\n", strrchr(str, a));
        return 0;
}
*/
