#include <unistd.h>
void first_word(char *str)
{
    int i=0;
    while (str[i])
    {
        write(1,&(str[i]),1);
        if (str[i+1] == ' ')
        {
            break;
        }
        i++;
    }
}
void last_word(char *str)
{
    int i=0;
    while (str[i])
    {
        i++;
    }
    while (str[i-1]!= ' ')
    {
        i--;
    }
    while (str[i])
    {
        write(1,&(str[i++]),1);
    }
}
int main(int argc, char *argv[])
{
    if(argv[2][0] == '1')
        first_word(argv[1]);
    if(argv[2][0] == '2')
        last_word(argv[1]);
    return 0;
}
