#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
    int i=0;
    int range = end >=start ? end - start + 1 : start - end + 1;
    int *dest;

    dest = malloc(range * sizeof(int));
    if(!dest)
        return 0;
    while (i<range)
    {
        dest[i++] = end >=start ? end-- : end++;
    }
    return dest;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *dest = ft_rrange(1,-3);
    int i = 0;
    while (i<5)
    {
        printf("dest : %d \n",dest[i]);
        i++;
    }
    return 0;
}
