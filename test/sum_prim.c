int is_prime(int nb)
{
    int i=2;
    while (i * i <= nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int sum_prime(int nb){
    int res = 0;
    if(nb==1)
        res = 1;
    int i = 2;
    while (i<=nb)
    {
        if(is_prime(i))
            res += i;
        i++;
    }
    return res;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("%d",sum_prime(atoi(argv[1])));
    return 0;
}
