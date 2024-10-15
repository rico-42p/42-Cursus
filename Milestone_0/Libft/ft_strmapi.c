/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:41:00 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/11 18:37:10 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char	ft_toupper(unsigned int i, char c)
{
	(void)i;
	if ('a' <= c && c <= 'z')
		return (c -= 32);
	return c;
}
#include <stdio.h>
int main()
{
	char *s = "123456abcdef";

	printf("%s\n", ft_strmapi(s, ft_toupper));
	return 0;
}
*/
