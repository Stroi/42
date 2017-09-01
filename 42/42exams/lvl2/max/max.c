#include <stdio.h>

int     max(int *tab, unsigned int len)
{
    int temp;
    int i;

    i = 0;
    temp = 0;
    temp = tab[0];
    while(i < len)
    {
        if(tab[i] < tab[i + 1])
            temp = tab[i + 1];
        i++;
    }
    return (temp);
}

int     main()
{
    int tab[6] = {1,2,8,5,4};
    printf("%d", max(tab, 5));
    return 0;
}