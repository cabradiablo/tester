#include "prueba.h"

//main para implementacion de parseo de mapa
int	main(int argc, char **argv)
{
    char    ***map;
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    k = 0;
    if (argc != 2)
        return (0);
    map = ft_get_map(argv[1]);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
        for (int k = 0; map[i][j][k] != '\0'; k++) {
            printf("%c", map[i][j][k]);
        }
        printf(" ");
    }
    printf("\n");
}
	return (0);
}