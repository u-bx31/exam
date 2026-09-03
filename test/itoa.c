#include <stdlib.h>
#include <stdio.h>

int numlen(long n)
{
    int len;

    len = 1;
    if (n < 0)
        len++;
    while (n <= -10 || n >= 10)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int i;
    char *dest;
    long nb;
    int range;

    nb = (long)n;
    range = numlen(nb) + 1;

    dest = malloc(range * sizeof(char));
    if (!dest)
        return (NULL);

    i = range - 1;
    dest[i] = '\0';

    if (nb < 0)
    {
        dest[0] = '-';
        nb *= -1;
    }

    if (nb == 0)
        dest[0] = '0';

    while (nb > 0)
    {
        i--;
        dest[i] = nb % 10 + '0';
        nb /= 10;
    }

    return (dest);
}

int main(void)
{
    int nb;
    char *dest;

    nb = 42;
    dest = ft_itoa(nb);

    printf("%s\n", dest);

    free(dest);
    return (0);
}
