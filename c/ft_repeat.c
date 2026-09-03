#include <unistd.h>

void ft_repeat(char *str)
{
    char repeat;
    while (*str)
    {
        repeat = *str - 'a' + 1;
        while (repeat > 0)
        {
            write(1,str,1);
            repeat--;
        }
        str++;
    }
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	ft_repeat(argv[1]);
	return (0);
}