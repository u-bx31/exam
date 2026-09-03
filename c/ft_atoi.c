#include <unistd.h>

void ft_3atoi(char *str)
{
    int sign = 1;
    int first = 1;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
        {
            if (first)
                first = 0;
            else if (*(str - 1) < '0' || *(str - 1) > '9')
                write(1, ",", 1);

            write(1, str, 1);
        }
        str++;
    }
}


int main(int argc, char const *argv[])
{
    char t1[]= " ---+--+1234ab567";
    ft_3atoi(t1);
    return 0;
}
