#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int range;
    char printChar;

    range = 35;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
        while(argv[1][i])
        {
            if(argv[1][i] <= 122 && argv[1][i] >= 97)
            { 
                printChar = 97 + (122 - argv[1][i]);
                write(1, &printChar, 1);
            }
            else if(argv[1][i] <= 90 && argv[1][i] >= 65)
            {
                printChar = 65 + (90 - argv[1][i]);
                write(1, &printChar, 1);
            }
            else
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    return 0;
}