#include "so_long.h"
#include "./mlx/mlx.h"


int	main(void)
{
	void *mlx;
	void *window;
	void *img;
	void *duvar ="./img/duvar.xpm";
	void *zemin ="./img/zemin.xpm";
	void *oyuncu ="./img/oyuncu.xpm";
	void *take = "./img/take.xpm";
	void *exit = "./img/exit.xpm";

	int x;
	int y;
	int x1 = 0;
	int y1 = 0;



	

	
	int fd ;
    char *map;
    char **splitmap;

    fd = open("map.ber",O_RDONLY);
    map = read_and_save(fd);
	splitmap = ft_split(map,'\n');
	
	mlx = mlx_init();
	window = mlx_new_window(mlx,1920,1080,"Planet");
	
	int i = 0;
	int j = 0;
	while(splitmap[i])
	{	
		while(splitmap[i][j])
		{
			if(splitmap[i][j] == '1')
			{
				img = mlx_xpm_file_to_image(mlx,duvar,&x,&y);
				mlx_put_image_to_window(mlx,window,img,x1+(j*64),y1+(i*64));
			}
			else
			{	
				img = mlx_xpm_file_to_image(mlx,zemin,&x,&y);
				mlx_put_image_to_window(mlx,window,img,x1+(j*64),y1+(i*64));
			}
			if(splitmap[i][j] == 'P')
			{
				img = mlx_xpm_file_to_image(mlx,oyuncu,&x,&y);
				mlx_put_image_to_window(mlx,window,img,x1+(j*64),y1+(i*64));	
			}
			if(splitmap[i][j] == 'E')
			{
				img = mlx_xpm_file_to_image(mlx,exit,&x,&y);
				mlx_put_image_to_window(mlx,window,img,x1+(j*64),y1+(i*64));	
			}
			if(splitmap[i][j] == 'C')
			{
				img = mlx_xpm_file_to_image(mlx,take,&x,&y);
				mlx_put_image_to_window(mlx,window,img,x1+(j*64),y1+(i*64));	
			}
			j++;
		}
		j = 0;
		i++;
	}
	mlx_loop(mlx);
}