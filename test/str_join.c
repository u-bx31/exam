#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
    int i=0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *str_copy_sep(char *dest , char **strs,char *sep , int size)
{
    int i = 1;
    int pos = 0;
    int j;

    while (strs[i])
    {
        j = 0;
        while (strs[i][j])
        {
            dest[pos++] = strs[i][j++];
        }
        if(i<size -1)
        {
            j=0;
            while (sep[j])
            {
                dest[pos++] = sep[j++];
            }
        }
        i++;
    }
    dest[pos] = '\0';
    return dest;
}

char *str_join(char **strs , char *sep , int size)
{
    int i =0;
    int range = 1;
    char *dest;
    if(size == 0)
        return((char *)malloc(sizeof(char)));
    while (i<size)
    {
        range += str_len(strs[i++]);
    }
    if(size > 1)
    {
        range += str_len(sep) * (size -1);
    }
    dest = malloc(range * sizeof(char));
    if(!dest)
        return NULL;
    str_copy_sep(dest,strs,sep,size);
    return (dest);
}


int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        char sep[] = ", ";
        char *str = str_join(argv,sep,argc);
        printf("%s\n",str);
    }
    
    return 0;
}
