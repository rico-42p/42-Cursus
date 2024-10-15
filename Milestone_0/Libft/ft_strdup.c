/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:46:14 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/05 16:15:44 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(*s) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[] = "abcd";

	printf("st: %s,\nft: %s,", strdup(str), ft_strdup(str));
	return (0);
}
*/
