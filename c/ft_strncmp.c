#include <stdio.h>

int ft_strcmp(char *s1 , char *s2,unsigned int n)
{
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;
    while (n-1 > 0 && *p1 && *p1 == *p2)
    {
        p1++;
        p2++;
        n--;
    }
    return(*p1 - *p2);
}

int main(int argc, char const *argv[])
{
    char str1[] = "catxx";
    char str2[] = "catx31";
    int n = ft_strcmp(str1,str2,5);
    printf("%d ",n);
    return 0;
}
