#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    //Get length of string
    while(argv[1][i] != '\0')
    {
        i++;
    }
    //Start printing from the last character
    while(i >= 0)
    {
        write(1, &argv[1][i], 1);
        i--;
    }
    write(1, "\n", 1);
}