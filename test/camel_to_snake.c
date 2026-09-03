#include <stdio.h>
int main(int argc, char *argv[])
{
    char res[100];
    if (argc == 2)
    {
        int i =0 ;
        int j =0 ;
        while (argv[1][i])
        {
            if(argv[1][i]>='A' && argv[1][i]<='Z' && i != 0)
            {
                res[j++] = '_';
                res[j++] = (argv[1][i] + 32);
            }
            else{
                res[j++] = argv[1][i];
            }
            i++;
        }
        res[j] = '\0';
        printf("%s",res);
    }
    
    return 0;
}
