#include <unistd.h>
int main(int argc, char *argv[])
{
    while (*argv[1])
    {
        if(*argv[1]>='a'&&*argv[1]<='z')
        {
            *argv[1] = 'z' - (*argv[1] - 'a');
        }
        write(1,argv[1],1);
        argv[1]++;
    }
    
    return 0;
}
