#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies a string into a new allocated space in memory
 * @str: string to duplicate
 * Return: pointer if success, null if it fail
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
