#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print lowercase alphabet
 *
 * Return: (0) success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
