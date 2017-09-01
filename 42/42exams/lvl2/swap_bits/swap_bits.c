#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char temp_octet;

    temp_octet = octet;

    octet = octet << 4;
    temp_octet = temp_octet >> 4;
    octet = octet | temp_octet;
    return octet;
}

unsigned char	reverse_bits(unsigned char octet)
{
    // octet = 01000001
    unsigned char ret_val;
    int i;

    ret_val = 0;
    i = 0;
    while (i < 7)
    {
        if (octet % 2 == 1)
            ret_val |= 1;
        octet = octet / 2;
        ret_val = ret_val * 2; 
        i++;
    }
    if (octet % 2 == 1)
        ret_val |= 1;
    return (ret_val);
}

void	print_bits(unsigned char octet)
{
    int i;
      
    octet = reverse_bits(octet);
    i = 0;
    while(i < 8)
    {
        if (octet % 2 == 1)
        {
            write(1, "1", 1);
        }
        else
        {
            write(1, "0", 1);
        }
        octet = octet / 2;
        i++;
    }
}

int     main()
{
    unsigned char a;

    a = 'A';
    print_bits(swap_bits(a));
    return 0;
}