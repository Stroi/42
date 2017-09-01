#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int l;
    char t;

    i = 0;
    l = 0;
    while(str[l] != '\0')
        l++;
    l--;
	while (i < l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
        i++;
        l--;
	}
    return (str);
}

int     main()
{
    char s[6] = "asdfg";

    printf("%s", ft_strrev(s));
}