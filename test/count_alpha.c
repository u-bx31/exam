
char to_lower(char str){
    if(str>='A'&&str<='Z')
        str+=32;
    return str;
}
int ft_count(char *s,char c){
    int i =0;
    int count=0;
    while (s[i])
    {
        if(to_lower(s[i])== to_lower(c))
        {
            count++;
        }
        i++;
    }
    return (count);
}

int seen(char *s,int pos)
{
    int i =0;
    int count =0;
    while (i<pos)
    {
        if(to_lower(s[i]) == to_lower(s[pos]))
        {
            return 1;
        }
        i++;
    }
    return 0;
    
}
int	ft_isalpha(char c)
{
	c = to_lower(c);
	return (c >= 'a' && c <= 'z');
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int f = 1;
    while (argv[1][i])
    {
        if(ft_isalpha(argv[1][i]) && !seen(argv[1],i)){
            if(!f)
                printf(", ");
            printf("%c %d ",to_lower(argv[1][i]),ft_count(argv[1],argv[1][i]));
            f=0;
        }
        i++;
    }    
    return 0;
}
