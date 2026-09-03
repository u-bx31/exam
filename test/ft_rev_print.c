#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int i =0;
        int len =0;
        char tmp;
        while (argv[1][i])
        {
            i++;
            len++;
        }
        len--;
        i=0;
        while (i <len)
        {
            tmp = argv[1][i];
            argv[1][i] = argv[1][len];
            argv[1][len] = tmp;
            i++;
            len--;
        }
        printf("%s",argv[1]);
    }
    write(1,"\n",1);
    return 0;
}
