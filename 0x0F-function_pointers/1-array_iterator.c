#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a fctn given as a parameter on each element
* of an array
* @array: array of given elements
* @size: size of the array
* @action: pointer to the used function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
