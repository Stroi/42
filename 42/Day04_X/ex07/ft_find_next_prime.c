#include <stdio.h>

int ft_is_prime(int nb)
{
    int count;

    if(nb == 0 || nb == 1)
    {
        return 0;
    } else
    {
        count = (nb > 1000000000 ? nb / 100 : nb / 2);
        while (count > 1)
        {
            if (nb % count == 0)
            {
                return 0;
            } 
            count--;
        }
    }
    return 1;
}

int ft_is_next_prime(int nb)
{
    while(ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return nb;
}

int main()
{
    printf("%d", ft_is_next_prime(1000002667));
}