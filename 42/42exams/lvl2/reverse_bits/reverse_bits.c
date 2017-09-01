unsigned char	reverse_bits(unsigned char octet)
{
    // octet = 01000001
    unsigned char ret_val;
    int i;

    ret_val = 0;
    i = 0;
    while (i < 7)
    {                               // ret_val = 00000000
        if (octet % 2 == 1)         // checks if there is a 1 at the end
            ret_val |= 1;           // 00000000 (ret_val)
                                    // 00000001 (1 in binary)
                                    // |= [bitwise operator "OR", copies a bit if it exists in either operand]
                                    // 00000001 (ret_val)
        octet = octet / 2;          // division by two shifts binary numbers to the right: 01000001 / 2 = 001000000 (octet)
        ret_val = ret_val * 2;      // multiplication by two shifts binary numbers to the left: 00000001 * 2 = 00000010 
        i++;
    }
    if (octet % 2 == 1)             // doing the same thing as before but without shifting, because this is the last number
        ret_val |= 1;
    return (ret_val);
}
