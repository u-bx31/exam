#include <stdio.h>
int slen(char *str)
{
    int i =0;
    while (str[i])
    {
       i++;
    }
    return i;
}
int main(int argc, char *argv[])
{
    if(argc == 4)
    {
        char *p1 = slen(argv[2]) == 1 ? argv[2] :NULL;
        char *p2 = slen(argv[3]) == 1 ? argv[3] :NULL;
        int i = 0;
        while (argv[1][i])
        {
            if(argv[1][i] == *p1)
            {
                argv[1][i] = *p2;
            }
            i++;
        }
        printf("%s",argv[1]);
    }
    return 0;
}
