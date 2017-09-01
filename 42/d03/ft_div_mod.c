#include <stdio.h>

void	ft_div_mod(int a,int b, int *div, int *mod)
{
	if (b == 0)
	{
		return;
	} else
	{
		*div = (a / b);
		*mod = (a % b);
	}
}