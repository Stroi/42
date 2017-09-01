#include <unistd.h>
#include <stdio.h>
int     main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
    {
        i++;
    }
    while(argv[1][i] >= 65 && argv[1][i] <= 122)
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}