#include <unistd.h>
int main(int argc, char const *argv[])
{
    int i =0;
    int count = 1;
    
    while (argv[1][i] == ' ')
    {
        i++;
    }
    while (argv[1][i])
    {
        if(argv[1][i] != ' '){
            if(!count)
                write(1," ",1);
            while (argv[1][i] && argv[1][i] != ' ')
            {
                write(1,&(argv[1][i++]),1);
            }
            count = 0;
        }
        i++;
    }
    return 0;
}
