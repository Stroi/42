
void ft_ultimate_div_mod(int *a, int *b)
{
	if (b == 0)
	{
		return;
	} else 
	{
	int i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
	}
}
