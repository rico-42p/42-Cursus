/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:20:50 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/07 12:43:04 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>
size_t	ft_nbrmots(char const *s, char c)
{
	size_t	m;
	size_t	i;

	m = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] && s[i + 1] != c)
			|| (i == 0 && s[i] != c))
			m++;
		i++;
	}
	return (m);
}

size_t	ft_nbrlett(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_free(char **str, size_t m)
{
	size_t	i;

	i = 0;
	while (i < m)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ;
}

char	*ft_mots(const char *s, size_t len)
{
	char	*mot;

	if (!s)
		return (NULL);
	mot = malloc(len + 1);
	if (!mot)
		return (NULL);
	ft_memcpy(mot, s, len);
	mot[len] = '\0';
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	m;
	size_t	i;

	str = malloc(sizeof(*str) * (ft_nbrmots(s, c) + 1));
	if (!s || !(str))
		return (NULL);
	i = 0;
	m = 0;
	while (m < ft_nbrmots(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		*(str + m) = ft_mots(s + i, ft_nbrlett(s + i, c));
		if (!(*(str + m)))
		{
			ft_free(str, m);
			return (NULL);
		}
		i += ft_nbrlett(s + i, c);
		m++;
	}
	*(str + m) = NULL;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char phra[] = "je suis gentil";
	char phr[] = "    je suis   ";
	char ph[] = "";
	char p[] = " je    gentille";
	char c = ' ';
	char	**m = ft_split(phra, c);
	char    **m2 = ft_split(phr, c);
	char    **m3 = ft_split(ph, c);
	char    **m4 = ft_split(p, c);

	printf("%s, %s, %s\n", m[0], m[1], m[2]);
	printf("%s, %s,\n", m2[0], m2[1]);
	printf("%s,\n", m3[0]);
	printf("%s, %s,\n", m4[0], m4[1]);
	
	return 0;
}
*/
