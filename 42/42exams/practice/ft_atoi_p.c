#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if(str[i] == '-')
        sign = -1;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] >= 48 && str[i] <= 57)
    {
        result = result + (str[i] - 48);
        result = result * 10;
        i++;
    }
    result = result / 10;
    return (result * sign);
}

int main(int argc, char **argv)
{
    if(argc == 2)
        printf("%d", ft_atoi(argv[1]));
}
