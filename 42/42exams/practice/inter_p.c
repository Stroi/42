#include <unistd.h>
int     is_first(char *str, char c, int pos)
{
    pos--;
    while(pos> 0)
    {
        if(str[pos] == c)
            return 0;
        pos--;
    }
    return 1;
}

int     main(int argc, char **argv)
{
    int i;
    int j;
    
    if(argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    j = 0;
    i = 0;
    while(argv[1][i])
    {
        while(argv[2][j])
        {
            if(is_first(argv[1], argv[1][i], i) == 1 && is_first(argv[2], argv[2][j], j) == 1 && argv[1][i] == argv[2][j])
                write(1, &argv[1][i], 1);
            j++;
        }
        j = 0;
        i++;
    }
    write(1, "\n", 1);
    return 0;
}