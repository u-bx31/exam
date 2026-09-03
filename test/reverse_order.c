char *ft_strrev(char *str)
{
    int i =0;
    int len = 0;
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
    char *str = ft_strrev(argv[1]);

    int i =0;
    int start = 0;
    int end = 0;
    char tmp;
    while (str[i])
    {
        while (str[i] == ' ')
        {
            i++;
        }
        start = i;
        while (str[i] && str[i]!= ' ')
        {
            i++;
        }
        end = i - 1;

        while (start< end)
        {
            tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
            start++;
            end--;
        }
        i++;
    }
    printf("%s",str);

    return 0;
}
