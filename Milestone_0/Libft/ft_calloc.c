/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:28 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/06/28 23:25:04 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdint.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb > (ULONG_MAX / size))
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
/*
int main()
{
	char *str;

	str = ft_calloc(10000000000, 5);
	if (str == ((void*)0))
 		return 1;
	free(str);
	return (0);
}
*/
