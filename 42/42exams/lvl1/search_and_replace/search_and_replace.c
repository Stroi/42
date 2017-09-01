#include <unistd.h>

int     ft_strlen(char *str)
{
    int i;

    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int     main(int argc, char **argv)
{
    int i;

    // Check number of arguments
    if(argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    // Check correct length of 2nd and 3rd argument
    if(ft_strlen(argv[2]) != 1 && ft_strlen(argv[2]) != 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    // Go through the string and look for same characters if match print the other one.
    while(argv[1][i])
    {
        if(argv[1][i] == argv[2][0])
        {
            write(1, &argv[3][0], 1);
        } else
        {
            write(1, &argv[1][i], 1);
        }
        i++;

    }
    write(1, "\n", 1);
    return 0;
}
