char *ft_strcat(char *dest, char *src)
{
    char *start = dest;

    while (*dest)
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return(start);
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char dest[13]="hello ";
    char src[]="world";

    char *res = ft_strcat(dest,src);
    int i = 0;
    while(i<=13){
        if(res[i] == '\0'){
            printf("\\0");
            break;
        }else{
            printf("%c",res[i]);
        }
        i++;
    }
    
    return 0;
}
