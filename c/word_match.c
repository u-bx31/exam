
char *word_match(char *str, char *str2)
{
    char *start;
    char *find;
    while (*str)
    {
        start = str;
        find = str2;
        while (*start && *find && *start == *find)
        {
            start++;
            find++;
        }
        if(*find == '\0')
        {
            return(str2);
        }
        str++;
    }
    return(0);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    char *res = word_match(argv[1],argv[2]);

    printf("%s",res);
    return 0;
}