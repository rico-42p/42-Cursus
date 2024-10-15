/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   get_next_line.h:+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: ryoussfi <marvin@42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2024/07/18 13:35:57 by ryoussfi  #+##+# */
/*   Updated: 2024/07/18 13:35:59 by ryoussfi ###   ########.fr   */
/**/
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char		*get_next_line(int fd);
char		*ft_strdup(char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_substr(char *s, unsigned int start, size_t len);
size_t		ft_strlen(char *s);

#endif