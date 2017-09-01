#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int n;
    
    if (nb >= 0)
    {
        n = 1;
        while(nb >1)
        {
        n = n * nb;
        nb--;
        }
        return n;
    } 
    else
    {
        return 0;
    }    
}
 int    main()
 {
     printf("%d", ft_iterative_factorial(12));
 }