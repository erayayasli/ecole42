/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayasli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:44:52 by eayasli           #+#    #+#             */
/*   Updated: 2022/03/02 10:47:12 by eayasli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include<stdlib.h>
# include<unistd.h>
# include<stdio.h>
# include<fcntl.h>
#define BUFFER_SIZE 500000

int	ft_strlen(char *str);
static int	count_words(const char *str, char c);
static char	*word_dup(const char *str, int start, int finish);
char	**ft_split(char *s, char c);
char	*read_and_save(int fd);
int row_counter(char *map);
void    wall_check(char **line,int last);
void    exacute();

void    is_everything_ok();

/*
size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_read_and_save(int fd, char *save);
char	*get_line(char *str);
char	*get_remain(char *str);
*/
#endif
