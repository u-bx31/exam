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

void ft_union(char *st1, char *st2)
{
    int i = 0;
    int j = 0;
    while (st1[i])
    {
        if(!chec_doub(st1 , i)){
            write(1,&(st1[i]),1);
        }
        i++;
    }
    while (st2[j])
    {
        if(!chec_doub(st2 , j) && !check_in_string(st1,st2[j]) ){
            write(1,&(st2[j]),1);
        }
        j++;
    }
}

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        ft_union(argv[1],argv[2]);
    }
    return 0;
}
