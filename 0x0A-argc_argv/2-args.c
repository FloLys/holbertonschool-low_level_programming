#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it recieves
 * @argc: counter for arguments
 * @argv: array of strings of arguments
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
