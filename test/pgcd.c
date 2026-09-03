#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int tmp;
    while (b!=0)
    {
        tmp = b;
        b = a%b;
        a = tmp;
    }
    printf("%d",a);
    
    return 0;
}
