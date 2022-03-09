#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: array of given elements
* @size: number of elements in the array
* @cmp: pointer to function which compares values
* Return: index of the first element when first found isn't 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
