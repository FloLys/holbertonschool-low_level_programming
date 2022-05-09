#include "main.h"

/**
 * _strncat - The strncat() function shall append not more than n bytes (a NUL
 * character and bytes that follow it are not appended)
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to append from array src to end of array dest
 * Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{

	int destSize = 0;
	int srcSize = 0;
	int a;

	while (dest[destSize] != '\0')
		destSize++;

	while (src[srcSize] != '\0')
		srcSize++;

	for (a = 0; a < srcSize && a < n; a++)
		dest[destSize + a] = src[a];

	return (dest);

}
