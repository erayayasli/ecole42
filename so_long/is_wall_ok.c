#include "so_long.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
//libft split fonksiyonu
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
}
static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

//libft split fonksiyonu son
char	*read_and_save(int fd)
{
	int			read_bytes;
	char		*buf;
    char        **map;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	if ( read_bytes != 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			
			return (NULL);
		}
		buf[read_bytes] = '\0';
	}
    return(buf);
}
int row_counter(char *map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (map[i] != '\0')
    {
        if(map[i] == '\n')
        {
            j++;
        }
        i++;
    }

    j++;
    return (j);
}
void    wall_check(char **line,int last)
{
    int i;
    
    i = 0;
    while(line[0][i] || line[last][i])
    {
        if(line[0][i] != '1' || line[last][i] != '1')
        {
            printf("Error\nDuvarlarda sıkıntı var.");
            exit(0);
        }
        i++;
    }
    int j = 1;
    int k = 0;
    int len;
    
    len = ft_strlen(line[j]);
    while(j <= last)
    {
        if (line[j][0] != '1'  || line[j][len-1] != '1')
        {
            printf("Error\nDuvarlarda sıkıntı var.");
            exit(0);
        }
        j++;
    }
}
void    exacute(){
    int fd ;
    char *map;
    char **splitmap;
    fd = open("map.ber",O_RDONLY);
    map = read_and_save(fd);

    int row;
    row = row_counter(map);
    
    splitmap = ft_split(map,'\n');
    wall_check(splitmap,row-1);    

}