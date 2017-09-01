#include <stdlib.h>
#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int j;
    int length;
    char *temp;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    length = 0;
    while(argv[1][length])
        length++;
    temp = (char*)malloc(sizeof(char) * (j+1));
    i = 0;
    j = 0;
    while(argv[2][i] != '\0')
    {
        if(argv[1][j] == argv[2][i])
        {
            temp[j] = argv[1][j];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    if (length != j)
    {
        write(1, "\n", 1);
        return 0;
    }
    j = 0;
    while(temp[j] != '\0')
    {
        write(1, &temp[j], 1);
        j++;
    }
    write(1, "\n", 1);
    return 0;
}