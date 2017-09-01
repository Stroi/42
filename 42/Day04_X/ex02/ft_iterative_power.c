#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    if(power > 0)
    {
    int temp;

    temp = nb;
    while (power >= 2)
    {
        nb = nb * temp;
        power--;
    }
    return nb;
    }
    else if (power == 0)
    {
        return 1;
    } else 
    {
        return 0;
    }
}

int main()
{
    printf("%d", ft_iterative_power(2,1));
}