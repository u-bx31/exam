#include <unistd.h>
int check_exist(char *start, char *current, char c)
{
    char *ls = start;
    while (ls < current)
    {
        if (*ls == c)
            return (1);
        ls++;
    }
    return (0);
}

int check_in_string(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

void ft_union(char *str1, char *str2)
{
    char *start1 = str1;
    char *start2 = str2;

   while (*str1)
   {
        if(!check_exist(start1,str1,*str1)){
            write(1,str1,1);
        }
        str1++;
   }
   while (*str2)
   {
        if(check_in_string(start1,*str2) && !check_exist(start2,str2,*str2))
        {
            write(1,str2,1);
        }
        str2++;
   }
}

int main(int argc, char *argv[])
{
    if(argc > 2)
    {
        ft_union(argv[1],argv[2]);
    }
    write(1,'\0',1);
    return 0;
}
