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

int ft_ultimate_range(int **range, int min, int max)
{
    *range = ft_range(min, max);
    return (max - min);
}

int     main()
{
    int *x;
    printf("%d", ft_ultimate_range(&x, -1, 50));
    
}