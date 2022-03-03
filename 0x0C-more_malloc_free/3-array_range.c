#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: lowest value
 * @max: highest value
 * Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * max - min + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		a[i] = i + min;

	return (a);
}
