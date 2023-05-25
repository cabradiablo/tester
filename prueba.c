#include "prueba.h"

char    ***ft_get_map(char *argv)
{
    int     fd;
    int     x;
    fd = open(argv, O_RDONLY);
    x = ft_fdlines_counter(fd) + 1;
    if (fd == -1)
        return (NULL);
    else
        return (ft_parse_map(argv, x));
}
char    ***ft_parse_map(char *argv, int x)
{
    char    *line;
    char    ***coor;
    int     fd;

    coor = (char ***)malloc(x * (sizeof(char **)));
    x = 0;
    fd = open(argv, O_RDONLY);
    if (fd == -1)
        return (NULL);
    while ((line = get_next_line(fd)))
    {
        coor[x++] = ft_split(line, ' ');
        free(line);
    }
    close(fd);
    coor[x] = NULL;
    return (coor);
}
int ft_fdlines_counter(int fd)
{
    char    *line;
    int     counter;

    counter = 0;
    while ((line = get_next_line(fd)))
    {
        free(line);
        counter++;
    }
    close(fd);
    return (counter);
}