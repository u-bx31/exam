#include <unistd.h>
void ft_revprint(char *str)
{
    char *start = str;
    while (*str)
    {
        str++;
    }
    str--;
    while (str >= start)
    {
        write(1,str,1);
        str--;
    }
}


int main(int argc, char *argv[])
{
    ft_revprint(argv[1]);
    return 0;
}
