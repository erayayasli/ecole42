#include "so_long.h"
#include <string.h>
void    is_everything_ok()
{
    int fd ;
    char *map;
    fd = open("map.ber",O_RDONLY);
    map = read_and_save(fd);

    int p;
    int c;
    int e;
    int i;
    int p2;

    p = 0;
    c = 0;
    e = 0;
    i = 0;
    p2 = 0;
    while(map[i] != '\0')
    {
        if(map[i] == 'P' )
        {
            p = 1;
            p2++;
        }
        if(map[i] == 'C')
            c = 1;
        if(map[i] == 'E')
            e = 1;           
        i++;
    }
    if(p == 0 || c == 0|| e == 0 || p2 != 1 ) 
    {
        printf("Error\nP, C veya E 'de bir sorun var.");
        exit(0);
    }
}