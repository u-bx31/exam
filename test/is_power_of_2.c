int is_power_of_2(int nb)
{
    int i =0;
    if (nb == 0)
		return (0);
    while (nb % 2 == 0)
    {
        nb /= 2;
    }
    return(nb==1);
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    printf("%d",is_power_of_2(atoi(argv[1])));
    return 0;
}
