/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:53:26 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/05 18:48:54 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	l1;
	char	*str;

	l1 = ft_strlen(s1);
	str = malloc(sizeof(*str) * (l1 + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - l1])
	{
		str[i] = s2[i - l1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "12345";
	char s2[] = "abcde";

	printf("ft : %s\n", ft_strjoin(s1, s2));
	return 0;
}
*/
