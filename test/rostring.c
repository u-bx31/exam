#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    char *str;
    int i;
    int start;
    int first_end;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    str = argv[1];
    i = 0;

    /* Skip spaces/tabs at the beginning */
    while (is_space(str[i]))
        i++;

    /* Find the end of the first word */
    start = i;
    while (str[i] && !is_space(str[i]))
        i++;
    first_end = i;

    /* Skip spaces/tabs after the first word */
    while (is_space(str[i]))
        i++;

    /* Print the remaining words */
    while (str[i])
    {
        if (is_space(str[i]))
        {
            while (is_space(str[i]))
                i++;

            if (str[i])
                write(1, " ", 1);
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }

    /* Print a space before the first word if there were other words */
    if (first_end > start && str[first_end])
        write(1, " ", 1);

    /* Print the first word */
    i = start;
    while (i < first_end)
    {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
    return (0);
}
