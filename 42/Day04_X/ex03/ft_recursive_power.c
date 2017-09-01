#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
    if (power != 0)
    {
        return power > 0 ? nb * ft_recursive_power(nb,power - 1) : 0;
    }
    else
    {
        return 1;
    }

}

int main()
{
    printf("%d", ft_recursive_power(600,-1));
}