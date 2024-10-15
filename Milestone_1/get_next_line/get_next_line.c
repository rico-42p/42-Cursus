/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:32:21 by ryoussfi          #+#    #+#             */
/*   Updated: 2024/07/18 13:34:51 by ryoussfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*_donne_ligne(int fd, char *line_n_o, char *buffer_n_o);
static char	*_fait_lignes(char *ligne);
static char	*ft_strchr(char *s, int c);

char	*get_next_line(int fd)
{
	static char	*line_n_o;
	char		*ligne;
	char		*buffer_n_o;

	buffer_n_o = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(line_n_o);
		free(buffer_n_o);
		line_n_o = NULL;
		buffer_n_o = NULL;
		return (NULL);
	}
	if (!buffer_n_o)
		return (NULL);
	ligne = _donne_ligne(fd, line_n_o, buffer_n_o);
	free(buffer_n_o);
	buffer_n_o = NULL;
	if (!ligne)
		return (NULL);
	line_n_o = _fait_lignes(ligne);
	return (ligne);
}

static char	*_donne_ligne(int fd, char *line_n_o, char *buffer_n_o)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer_n_o, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(line_n_o);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer_n_o[b_read] = 0;
		if (!line_n_o)
			line_n_o = ft_strdup("");
		tmp = line_n_o;
		line_n_o = ft_strjoin(tmp, buffer_n_o);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer_n_o, '\n'))
			break ;
	}
	return (line_n_o);
}

static char	*_fait_lignes(char *line_buffer)
{
	char	*line_n_o;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
	i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	line_n_o = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*line_n_o == 0)
	{
		free(line_n_o);
		line_n_o = NULL;
	}
	line_buffer[i + 1] = 0;
	return (line_n_o);
}

static char	*ft_strchr(char *s, int c)
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
	return (NULL);
}

//TEST /////////////////////////////////////////////////////////////
// gcc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c && ./a.out
//./a.out < test2.txt | cat -e
//./a.out | cat -e   controle + d
#include <stdio.h>
	// int main()////////////////////////////////////////////////////// TEST STDIN
	// {
	//     char *line;

	//     while ((line = get_next_line(0)) != NULL) // 0 correspond à stdin
	//     {
	//         printf("test : %s", line);
	//         free(line);
	//     }
	// 	free(line);
	//     return 0;
	// }
// int	main(void)/////////////////////////////////////////////////// TEST FICHIER
// {
// 	char	*line;
// 	int		i;
// 	int		fd1;

// 	fd1 = open("test.txt", O_RDONLY);                                 ////// 1er /////
// 	// fd1 = open("test2.txt", O_RDONLY);                                 ////// 2eme /////
// 	// fd1 = open("test3.txt", O_RDONLY);                                 ////// 3eme /////
// 	if (fd1 < 0)
// 		return (1); // Gérer l'échec d'ouverture de fichiers	
// 	i = 1;
// 	while (i < 7)                                 ////// 1er /////
// 	{
// 		line = get_next_line(fd1);
// 		if (line) // Vérifier si line n'est pas NULL avant de l'utiliser
// 		{
// 			printf("1line [%02d]: %s\n", i, line);
// 			free(line);
// 		}
// 		i++;
//    }
// 	close(fd1);
// 	return (0);
// }