#include <unistd.h>

int     isChar(char c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
        return 0;
    return 1;
}

int     main(int argc, char **argv)
{
    int i;
    int printNum;
    
    if(argc != 2)
        return 0;
    
    i = 0;
    //1st while loop takes characters from the string one by one.
    while(argv[1][i])
    {
        //Condition that checks if the current character of the first string is letter.
        if(isChar(argv[1][i]) == 0)
        {
            //printNum is number that indicates how many times letter should be printed.
            if(argv[1][i] >= 65 && argv[1][i] <= 90)
                printNum = argv[1][i] - 64;
            if(argv[1][i] >= 97 && argv[1][i] <= 122)
                printNum = argv[ 1][i] - 96;
            //Printing loop
            while(printNum > 0)
            {
                write(1, &argv[1][i], 1);
                printNum--;
            }
        //If the character is not a letter, print it only once.
        } else
        {
            write(1, &argv[1][i], 1);
        }
        i++;
    }
}
