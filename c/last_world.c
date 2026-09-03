#include <unistd.h>
void last_word(char *str)
{

    char *end;
    while (*str)
    {
        str++;
    }
    str--;
    end = str;
    while (*end != ' ')
        end--;
    end++;
    while (end <= str)
    {
        write(1, end, 1);
        end++;
    }
}


int main(int argc, char *argv[])
{
    last_word(argv[1]);
    return 0;
}