/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:32:53 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/07/10 20:32:55 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> //write
# include <stdlib.h> //malloc
# include <stdint.h> //size_t
# include <limits.h> //limits
# include <stdint.h> //uintptr_t
# include <stdarg.h> //va_list

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int		ft_putunbr(unsigned int n);
int		ft_putptr(unsigned long long ptr);
int		ft_putnbr_fd(int n, int fd);
int		ft_puthexa(unsigned int n, int maj);
int		ft_putchar_len(char *c);
int		ft_putchar_fd(char c, int fd);

#endif