#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numberz
 *
 * Return: (0) success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(&n);
	}

	putchar('\n');

	return (0);
}
