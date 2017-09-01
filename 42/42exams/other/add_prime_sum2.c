#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		is_prime(int x)
{
    int i;

    i = x / 2;
    while (i > 1)
    {
        if (x % i == 0)
            return 0;
        i--;
    }
    return 1;
}

int     main(int argc, char **argv)
{
    int i;
    int x;
    int temp;
    int result;

    if (argc != 2)
        return 0;
    temp = 7;
    x = 0;
    result = 0;
    while(x <= temp)
    {
        if (is_prime(x) == 1)
        {
            result = result + x;
        }
        x++;
    }
    write(1, &result, 4);
    return 0;
    
}