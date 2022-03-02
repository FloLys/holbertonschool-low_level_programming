#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize it with other char
 * @size: amount of memory to be filled with c
 * @c: chars to assign
 * Return: pointer if success, null if it fails or if 0
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			ar[i] = c;

		return (ar);
	}
}
