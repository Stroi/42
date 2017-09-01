#include <stdio.h>

int ft_is_prime(int nb)
{
    int count;

    if(nb == 0)
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

int main()
{
    printf("%d", ft_is_prime(2147483648));
}