#include <unistd.h>

int     is_first(char *str, char c, int pos)
{
    while(str[pos])
    {
        if(str[pos - 1] == c)
            return 0;
        pos--;
    }
    return 1;
}

int     is_used(char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(c == str[i])
            return 0;
        i++;
    }
    return 1;
}

int     main(int argc, char **argv)
{
    int i;
    int length;

    i = 0;
    if(argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(argv[1][length])
        length++;
    while(argv[1][i] != '\0')
    {
        if(is_first(argv[1], argv[1][i], i) == 1)
           { write(1, &argv[1][i], 1);}
        i++;
    }
    i = 0;
    while(argv[2][i])
    {
        if(is_first(argv[2], argv[2][i], i) == 1 && is_used(argv[1], argv[2][i]) == 1)
            write(1, &argv[2][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}