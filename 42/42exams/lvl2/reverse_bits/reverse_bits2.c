unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char ret_val;
    int i;

    ret_val = 0;
    i = 0;
    while(i < 7)
    {
        if(octet % 2 == 1)
            ret_val |= 1;
        octet = octet / 2;
        ret_val = ret_val * 2;
        i++;
    }
    if(octet % 2 == 1)
        ret_val |= 1;
    return (ret_val);
}