char *ft_strncat(char *dest, char *src,unsigned int n)
{
    char *start = dest;

    while (*dest)
    {
        dest++;
    }
    while (n > 0 && *src != '\0')
    {
        *dest++ = *src++;
        n--;
    }
    
    *dest = '\0';

    return(start);
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char dest[13]="hello ";
    char src[]="world";

    char *res = ft_strncat(dest,src,3);
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
