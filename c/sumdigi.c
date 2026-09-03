
int digit_sum(int n)
{
    if (n >= -9 && n <= 9)
    {
        if (n < 0)
            return -n;
        return n;
    }
    if (n < 0)
        return -(n % 10) + digit_sum(n / 10);
    return (n % 10) + digit_sum(n / 10);
}

int ft_atoi(char *str)
{
    int res = 0;
    while (*str >= '0' && *str<='9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return(res);
    
}


#include <stdio.h>
int main(int argc, char *argv[])
{
    int n1 = ft_atoi(argv[1]);
    int n2 = ft_atoi(argv[2]);
    int sum = digit_sum(n1)+ digit_sum(n2);
    printf("%d",sum);
    return 0;
}
