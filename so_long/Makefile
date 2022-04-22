NAME = so_long

SOURCES = main.c is_everything_ok.c is_map_rectangle.c is_wall_ok.c 

CC = gcc

OBJ = $(SRCS:.c=.o)

RM  = rm -rf
all: clean	$(NAME)
	
$(NAME): $(OBJ)
	$(CC) $(SOURCES) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	$(RM) *.o $(NAME)
