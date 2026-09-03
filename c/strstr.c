char *ft_strstr(char *str, char *to_find)
{
    char *s ;
    char *f ;

    if(*to_find=='\0'){
        return str;
    }
   while (*str)
   {
        s= str;
        f = to_find;

        while(*s && *f && *s==*f)
        {
            f++;
            s++;
        }
        if(*f =='\0'){
            return str;
        }
        str++;
   }
   return(0);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char dest[]="hello world sd ";
    char src[]="world";

    char *res = ft_strstr(dest,src);
    printf("%s",res);
    
    return 0;
}