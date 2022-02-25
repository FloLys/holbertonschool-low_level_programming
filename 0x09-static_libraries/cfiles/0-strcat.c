#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: complete destination string
 */
char *_strcat(char *dest, char *src)
{

	int destSize = 0;
	int srcSize = 0;
	int a;

	while (dest[destSize] != '\0')
		destSize++;

	while (src[srcSize] != '\0')
		srcSize++;

	for (a = 0; a <= srcSize; a++)
		dest[destSize + a] = src[a];

	return (dest);

}
