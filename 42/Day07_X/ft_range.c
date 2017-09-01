#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int i;
    int *str; 

    str = (int*)malloc(sizeof(*str) * (max - min));
    while (i < max)
    {
        str[i] = min;
        min++;
		i++; 
    }
    return (str);
}

int     main()
{
    int  *x = ft_range(-1, 5);
    printf("%d", x[]);
    
}