#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int i =0;
        int start;
        int end;
        char tmp;
        while (argv[1][i])
        {
            while (argv[1][i] == ' ')
            {
                i++;
            }
            start = i;
            while (argv[1][i] && argv[1][i]!=' ')
            {
                i++;
            }
            end = i-1;
            tmp = argv[1][start];
            argv[1][start] = argv[1][end];
            argv[1][end] = tmp;
            i++;
        }
        printf("%s\n",argv[1]);
    }
    return 0;
}
