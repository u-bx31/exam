#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc ==2)
    {
        int i =0;
        while(argv[1][i])
        {
            if((argv[1][i] >='a' && argv[1][i]<='z'))
            {
               argv[1][i] = 'z' - (argv[1][i] - 'a');
            }
            if ((argv[1][i] >='A' && argv[1][i]<='Z'))
            {
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            }
            
            i++;
        }
        printf("%s",argv[1]);
    }
    
    return 0;
}
