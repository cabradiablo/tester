#ifndef PRUEBA_H
# define PRUEBA_H
# include "../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
#  endif
typedef struct	s_point
{
	int	x;
	int	y;
	int	z;
}				t_point;
typedef struct s_map
{
	t_point point;
	struct	s_map	*next;
}				t_map;
char    ***ft_get_map(char *argv);
char    ***ft_parse_map(char *argv, int x);
int ft_fdlines_counter(int fd);
#endif