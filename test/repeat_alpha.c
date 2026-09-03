#include <unistd.h>
int main(int argc, char *argv[])
{
    int repeat;
    int i =0 ;
    int j;
    if(argc == 2)
    {
        while (argv[1][i])
        {
            repeat = argv[1][i] - 'a' + 1;
            j=0;
            while (j < repeat)
            {
                write(1,&(argv[1][i]),1);
                j++;
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
