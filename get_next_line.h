/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:19:16 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/30 19:12:47 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_read_from_file(char *s_buffer, int fd);
int		ft_check_character(char *str, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_extract_line(char *s_buffer);
char	*ft_strcpy_nl(char *src, char *dest, int nl_stop);
char	*ft_update_data(char *s_buffer);
size_t	ft_strlen(char *str);

#endif