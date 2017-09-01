#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int i;
    int printNum;

    if(argc != 4)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    if(argv[2][0] == '+')
    {
        printNum = atoi(argv[1]) + atoi(argv[3]);
    } else if(argv[2][0] == '-')
    {
        printNum = atoi(argv[1]) - atoi(argv[3]);
    } else if(argv[2][0] == '*')
    {
        printNum = atoi(argv[1]) * atoi(argv[3]);
    } else if(argv[2][0] == '/')
    {
        if(atoi(argv[3]) == 0)
        {
            write(1, "\n", 1);
            return 0;
        } else
        {     
            printNum = atoi(argv[1]) / atoi(argv[3]);
        }
    }else if(argv[2][0] == '%')
    {
        if(atoi(argv[3]) == 0)
        {
            write(1, "\n", 1);
            return 0;
        } else
        {
            printNum = atoi(argv[1]) % atoi(argv[3]);
        }
    } else
    {
        write(1, "\n", 1);
        return 0;
    }
    printf("%d\n", printNum);
    return 0;

}