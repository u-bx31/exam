int c_doub(char *str, char c)
{
    while (*str)
    {
        if(*str==c)
            return 1;
        str++;
    }
    return 0;
}
int already_printed(char *start, char *current, char c) 
{ 
    while (start < current) 
    { 
        if (*start == c)
            return 1; 
        start++; 
    }
    return 0; 
}
#include <unistd.h>
void inter(char *str,char *str2)
{  
    char *start = str;
    while (*str)
    {
        if(c_doub(str2,*str) && !already_printed(start,str,*str))
        {
            write(1,str,1);
        }
        str++;
    }
}

int main(int argc, char *argv[])
{
    if(argc > 2)
    {
        inter(argv[1],argv[2]);
    }
    write(1,'\0',1);
    return 0;
}
