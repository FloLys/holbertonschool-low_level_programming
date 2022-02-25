#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counter for arguments
 * @argv: array of strings of arguments
 * Return: 0 is ok, 1 is error.
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*could be if (isdigit(argv[i][j]) == 0)*/
			if (!(argv[i][j] >= '0' &&  argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}

	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
