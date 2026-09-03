char *ft_strrev(char *str)
{
    int i =0;
    int len =0;
    char tmp;
    while (str[len])
    {
        len++;
    }
    len--;
    while (i<len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return str;
}


#include <stdio.h>
int main(int argc, char *argv[])
{
    char *dest = ft_strrev(argv[1]);
    printf("%s",dest);
    return 0;
}
