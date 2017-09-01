#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int oct;
	int div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}

int     main()
{
    unsigned char a;

    a = 'A';
    print_bits(a);
    return 0;
} 