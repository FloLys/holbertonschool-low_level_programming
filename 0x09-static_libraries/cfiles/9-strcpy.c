#include "main.h"

/**
 * _strcpy - copies a string to another by pointers
 * @dest: destination string
 * @src: base string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int size = 0;

	while (src[size] != '\0')
		size++;

	for (a = 0; a <= size; a++)
		dest[a] = src[a];

	return (dest);
}
