#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: counter for arguments
 * @argv: array of strings of arguments
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
