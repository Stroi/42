#include <unistd.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    int i;
    int j;
    int length;
    char *tempString;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    i = 0;
    j = 0;
    length = 0;
    while (argv[1][length] != '\0')
        length++;
    tempString = (char*)malloc(sizeof(char) * (length + 1));
    while(argv[2][i])
    {
        if(argv[2][i] == argv[1][j])
        {
            tempString[j] = argv[1][j];
            j++;
        }
        i++;
    }
    tempString[j] = '\0';
    i = 0;
    if(j == length)
    {
        while(i <= length)
        {
            write(1, &tempString[i], 1);
            i++;
        }
    } else
    {
        write(1, "\n", 1);
    }
    return 0;
}

