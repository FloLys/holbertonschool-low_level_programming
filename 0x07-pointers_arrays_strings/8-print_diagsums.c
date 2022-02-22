#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: array
 * @size: size
*/
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
