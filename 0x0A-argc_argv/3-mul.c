#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: counter for arguments
 * @argv: array of strings of arguments
 * Return: 0 is mul, 1 is error.
*/
int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}

	return (0);
}
