#include <stdio.h>

int ft_strcmp(char *s1 , char *s2)
{
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;
    while (*p1 && *p1 == *p2)
    {
        p1++;
        p2++;
    }
    return(*p1 - *p2);
}

int main(int argc, char const *argv[])
{
    char str1[] = "car";
    char str2[] = "cat 31";
    int n = ft_strcmp(str1,str2);
    printf("%d ",n);
    return 0;
}
