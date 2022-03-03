#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of b in a, returns pointer
 * if null, normal process termination, exit with status 98
 * @b: memory to copy
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
