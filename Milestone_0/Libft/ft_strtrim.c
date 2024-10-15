/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:51:45 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/05 20:00:38 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
int	ft_check(const char s, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;

	if (!set || !s1)
		return (NULL);
	i = 0;
	while (ft_check(s1[i], set) == 0)
		i++;
	start = i;
	i = ft_strlen(s1);
	while (ft_check(s1[i - 1], set) == 0)
		i--;
	len = i - start;
	return (ft_substr(s1, start, len));
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "1234121234442314a1bcde1234abcd1e421324231";
	char set[] = "1234";
	printf("%s\n", ft_strtrim(s1, set));
	return 0;
}
*/
