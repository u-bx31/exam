char *word_match(char *str , char *to_find)
{
    int i = 0;
    int j;

    while (str[i])
    {
        j=0;
        while (to_find[j] && str[i + j] == to_find[j])
        {
            j++;
        }
        if(to_find[j] == '\0')
        {
            return to_find;
        }
        i++;
    }
    return 0;
}
#include <stdio.h>
int main(int argc, char *argv[])
{
    char *dest = word_match(argv[1],argv[2]);
    printf("%s\n",dest);
    return 0;
}
