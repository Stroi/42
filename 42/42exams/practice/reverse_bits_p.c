#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char result;
    unsigned char temp;

    temp = 0;
    result = 0;
    

}
unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char result;

    result = 0;
    i = 0;
    while(i < 7)
    {
        if(octet % 2 == 1)
            result |= 1;
        octet = octet / 2;
        result = result * 2;
        i++;
    }
    if(octet % 2 == 1)
        result |= 1;
    return (result);
}

void	print_bits(unsigned char octet)
{
    int i;

    octet = reverse_bits(octet);
    i = 0;
    while(i < 8)
    {
        if(octet % 2 == 1)
        {
            write(1, "1", 1);
        } else
        {
            write(1, "0", 1);
        }
        octet /= 2;
        i++;
    }
}

int main()
{
    print_bits('c');
    return 0;
}
