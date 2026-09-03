int ft_strlen(char *s)
{
    char *p = s;
    while(*s)
    {
        s++;
    }
    return(s - p);
}


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int len_dest = 0;
    unsigned int len_src= 0;
    char *s = dest;
    int space = 0;

    len_dest = (unsigned int) ft_strlen(dest);
    len_src = (unsigned int) ft_strlen(src);

    if(len_dest >= size){
        return len_src + size;
    }
    while (*dest)
    {
        dest++;
        size--;
    }
    while (*src && size > 1)
    {
        *dest++ = *src++;
        size--;
    }
    *dest = '\0';
    return(len_dest + len_src);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char dest[]="hello world sd ";
    char src[]="world";

    unsigned int res = ft_strlcat(dest,src,20);
    printf("%d \n",res);
    printf("%s",dest);
    
    return 0;
}