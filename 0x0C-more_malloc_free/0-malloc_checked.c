#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize it with other char
 * @size: amount of memory to be filled with c
 * @c: chars to assign
 * Return: pointer if success, null if it fails or if 0
*/
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
}
