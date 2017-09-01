#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb > 0)
    {
        while (i * i <= nb)
        {
        if (i * i == nb)
            return i;
        else if (i >= 46341)
            return (0);
        ++i;
        }
    }
    return (0);
}



int main()
{
    printf("%d", ft_sqrt(4634166));
}