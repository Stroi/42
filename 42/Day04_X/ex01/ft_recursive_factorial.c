#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb >= 0 && nb <=12)
    {
    return nb >= 1 ? nb * ft_recursive_factorial(nb - 1) : 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    printf("%d", ft_recursive_factorial(4));
}