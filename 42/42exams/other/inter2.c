#include <unistd.h>

int     is_first(char *str, char c, int pos)
{
    while (pos > 0)
    {
        if (c == str[pos - 1])
        {
            return 0;
        }
        pos--;
    }
    return 1;
}

int     main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	if (argc != 3)
		return 0;
	while (argv[1][i])
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
                if (is_first(argv[1], argv[1][i], i) && k == 0)
                {
                    write(1, &argv[1][i], 1);
                    k++;
                }
			}
			j++;

		}
		i++;
		j = 0;
		k = 0;
	}
	return (0);
}