#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int i;
    unsigned int max;

    max = -2147483648;
    i = 0;
    while(tab[i])
    {
        if(tab[i] >= max)
            max = tab[i];
        i++;
    }
    return(max);
}

int     main()
{
    int s[5] = {-6, 0, 2, 10, -20};
    max = max(s,5);
    write(1, &max, 4);
    return 0;
}