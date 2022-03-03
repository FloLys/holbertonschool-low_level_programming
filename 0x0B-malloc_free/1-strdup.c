#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - 
 * @size: amount of memory to be filled with c
 * @c: chars to assign
 * Return: pointer if success, null if it fails or if 0
*/
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	dup = malloc(sizeof(char) * (j + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[j] = '\0';

	return (dup);
}
