#include "3-calc.h"

/**
* main - adds positive numbers
* @argc: argument 1
* @argv: argument 2
* Return: 0
*/
int main(int argc, char *argv[])
{
int a = 0, b = 0;

    if (argc != 3)
    {
        printf("Error\n");
        exit (98);
    }

    if (!(argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2]0[] == '%') && argv[2][1] == '\0' )
    {
        printf("Error\n");
        exit (99);
    }

    if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
    {
        printf("Error\n");
        exit (100);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    return (0);
}
