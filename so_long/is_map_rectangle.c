#include "so_long.h"

void    is_map_rectangle(){
    int fd ;
    char *map;
    char **splitmap;
    fd = open("map.ber",O_RDONLY);
    map = read_and_save(fd);

    int row;
    row = row_counter(map);
    
    splitmap = ft_split(map,'\n');

    int i;
    int len;
    i = 0;

    len = ft_strlen(splitmap[0]);
    while(i < row)
    {
        if(len != ft_strlen(splitmap[i]))
        {
            printf("Error\nMap dikdörtgen değil.");
            exit(0);
        }
        i++;
    }
}