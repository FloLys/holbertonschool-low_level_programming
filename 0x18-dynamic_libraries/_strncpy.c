#include "main.h"

/**
 * _strncpy - copy not more than n bytes (bytes that follow a NUL character are
 * not copied) from the array pointed to by src to the array pointed to by dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from array src to end of array dest
 * Return: destination string
*/
char *_strncpy(char *dest, char *src, int n)
{

	int destSize = 0;
	int srcSize = 0;
	int a;

	while (dest[destSize] != '\0')
		destSize++;

	while (src[srcSize] != '\0')
		srcSize++;

	for (a = 0; a <= srcSize && a < n; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);

}
