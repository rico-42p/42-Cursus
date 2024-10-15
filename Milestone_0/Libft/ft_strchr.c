/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:54:22 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/28 17:30:32 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
      //  char    s[] = "s";
	//char	a = 'o';

	printf("ft_: %p,\n", ft_strchr("teste", 'e'));
        printf("str: %p,\n", strchr("teste", 'e'));
        return 0;
}
*/
