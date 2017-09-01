#include <stdio.h>
#include <unistd.h>

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
				
				write(1, &argv[1][i],1);
				k++;
			}
			j++;

		}
		i++;
		j = 0;
		k = 0;
	}
	return (0);
}