int ft_strcspn(char *s1, char *s2)
{
    int i = 0;
    int j;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return i;
            j++;
        }
        i++;
    }
    return 0;
}
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    int start = 0;
    int end;
    char tmp;
    while (argv[1][i])
    {
        while (argv[1][i] == ' ')
        {
            i++;
        }
        start = i;
        while (argv[1][i] && argv[1][i] != ' ')
        {
            i++;
        }
        end = i - 1;
        while (start < end)
        {
            tmp = argv[1][start];
            argv[1][start] = argv[1][end];
            argv[1][end] = tmp;
            start++;
            end--;
        }
        i++;
    }

    printf("%s", argv[1]);

    return 0;
}
