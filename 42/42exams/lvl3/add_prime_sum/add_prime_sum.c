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
        if(nb % 2 != 0 || nb % 3 != 0 || nb % 5 != 0 || nb % 7 != 0 || nb % 11 != 0 || nb % 13 != 0 || nb % 19 != 0)
        {
            while (count > 1)
            {
                if (nb % count == 0)
                {
                    return 0;
                } 
                count = count - 2;
            }
        }
    }
    return 1;
}

int prime_sum(int nb)
{
    int result;

    result = 0;
    while(nb > 0)
    {
        if(ft_is_prime(nb) == 1)
            result = result + nb;
        nb--;
    }
    return result;
}

int main()
{
    printf("%d", prime_sum(200000));
}