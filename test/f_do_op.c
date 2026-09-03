#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
        return 0;
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[3]);
    char op = argv[2][0];
    int res = 0;

    if (op == '*')
    {
        res = n1 * n2;
    }
    if (op == '/')
    {
        res = n1 / n2;
    }
    if (op == '+')
    {
        res = n1 + n2;
    }
    if (op == '-')
    {
        res = n1 - n2;
    }
    if (op == '%')
    {
        res = n1 % n2;
    }
    printf("%d", res);

    return 0;
}
