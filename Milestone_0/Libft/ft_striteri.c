/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:30:29 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/11 13:56:34 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = 0;
	return ;
}
/*
void	ft_toupper(unsigned int i, char *c)
{
	(void)i;
	if ('a' <= *c && *c <= 'z')
		*c -= 32;
	return ;
}
#include <stdio.h>
int main()
{
	char s[] = "123456abcdef";

	ft_striteri(s, ft_toupper);
	printf("%s\n", s);
	return 0;
}
*/
