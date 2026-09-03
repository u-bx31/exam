int sumd(int n)
{
    int res = 0;
    if(n <=9)
    {
        return n;
    }
    return(n % 10 + sumd(n/10));
}

int ft_atoi(char *str)
{
    int i =0;
    int res = 0;
    while (str[i])
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}
#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc >=1 )
    {
        int res = 0;
        int i =1 ;
        int j;
        while (i<argc)
        {
            res += sumd(ft_atoi(argv[i]));
            i++;
        }
        printf("%d",res);
    }
    return 0;
}
