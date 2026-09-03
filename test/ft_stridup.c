#include <stdlib.h>
int strle(char *str)
{
    int i=0;
    while (str[i])
    {
        i++;
    }
    return i;    
}

char *ft_strdup(char *src)
{
    int i=0;
    char *dest;

    dest = malloc(strle(src)+1 * sizeof(char));
    if(!dest){
        return NULL;
    }
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *src = "helloo wolrd";

    char *dest = ft_strdup(src);

    printf("%s",dest);
    
    return 0;
}