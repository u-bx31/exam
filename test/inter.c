#include <stdio.h>
#include <unistd.h>
int chec_doub(char *str,int pos)
{
    int i =0;
    while (i< pos)
    {
        if(str[i] == str[pos])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int check_in_string(char *s1 , char s2)
{
    int i =0;
    while (s1[i])
    {
       if(s1[i] == s2)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

void ft_inter(char *st1, char *st2)
{
    int i =0;
    int j;
    while (st1[i])
    {
        if(!chec_doub(st1 , i)&& check_in_string(st2,st1[i])){
            write(1,&(st1[i]),1);
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        ft_inter(argv[1],argv[2]);
    }
    return 0;
}
