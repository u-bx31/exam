#include <stdio.h>
int main(int argc, char *argv[])
{
    char *t[] = {"12", "0", "0", "10203", "4020"};
    int i = 0;
    int j = 0;
    char *tmp;

    while (i<5)
    {
        if (t[i][0] != '0' || t[i][1] != '\0')
        {
            tmp = t[i];
            t[i] = t[j];
            t[j] = tmp;
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5)
    {
        printf("%s ", t[i]);
        i++;
    }
    return 0;
}
